// windows
#ifdef WIN32
#include <windows.h>
#endif

// opengl
#include <GL/glut.h>

#include "texture.h"
#include "tree/DeciduousTree.h"
#include "tree/CoastRedwood.h"
#include "tree/Forsythia.h"
#include "tree/SalixAlba.h"
#include "tree/ArtificialTree.h"
#include "viewer.h"

// global variables
Viewer viewer;
Tree *tree;
Texture t;
int species = 0;
int textureGround = 0;
int treeSize = 3;
GLuint treeList, groundList, foliageList;	// Id for displaylists
bool fullscreen = false;
bool drawLeaves = true;
bool drawBlossoms = false;
bool drawApples = false;


// global function prototypes
void initGraphics();
void display();
void keyboard(unsigned char key, int x, int y);
void reshape(int w, int h);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);
void drawScene();
void createScene();


void initGlut(int argc, char** argv) {
  int initial_width = 800;
  int initial_height = 600;

  // initialize the glut environment 
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
  
  // create a new window 
  glutCreateWindow("Treez");
  
  // set the size of the window
  glutReshapeWindow(initial_width, initial_height);
  viewer.ReViewport(initial_width, initial_height);
  
  // register the display callback function 
  glutDisplayFunc(display);
 
  // register the reshape callback function 
  glutReshapeFunc(reshape);

  // register the mouse functions
  glutMouseFunc(mouse);
  glutMotionFunc(mouseMotion);

  // register the keyboard function
  glutKeyboardFunc(keyboard);	
}


// ---------- initGraphics ----------------------------------------------

void initGraphics() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	
	// Create light components
	GLfloat ambientLight[] = { 0.3, 0.3, 0.3, 1.0 };
	GLfloat diffuseLight[] = { 1.0, 1.0, 1.0, 1.0 };;
	GLfloat light_position[] = {10.0, 20.0, 10.0, 1.0};
	
	// Assign created components to GL_LIGHT0
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	// enable a light source 
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);  

  	glEnable(GL_DEPTH_TEST);
  	glPolygonMode (GL_FRONT_AND_BACK, GL_FILL);
  	//glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
  	glEnable(GL_NORMALIZE);

	// specify the shade model
  	glShadeModel(GL_SMOOTH);
  	
  	// load Texture
    textureGround = t.loadTexture("data/grass.bmp"); // The Function LoadBitmap() return the current texture ID
}

// ---------- display ---------------------------------------------------

void display() {

  // clear the window
  glClearColor(0.0, 0.0, 0.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  // initialize viewing parameters
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  gluLookAt(0, 0, 1,  0, 0, 0,  0, 1, 0);

  // do the mouse control (trackball, dolly, translate)
  viewer.DoMouseControl();

  // draw the scene
  drawScene();
  
  // bring the background buffer to the front 
  glFlush();
  glutSwapBuffers();
}

// ---------- drawScene --------------------------------------------------

void drawScene() {
	glTranslatef(0.0, -3.0, 0.0);
	glRotatef(12, 1.0, 0.0, 0.0);

	glCallList(groundList);
  	glCallList(treeList);	
}

void createScene(GLvoid) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	
	// Delete old display lists to free memory
	glDeleteLists(treeList, 3); 				
	
	// Build display list for the ground
    glNewList(groundList, GL_COMPILE); 	
    	GLfloat mat_ambient[]   = {0.2, 0.6, 0.2, 0.0};
		GLfloat mat_diffuse[]   = {0.1, 0.2, 0.1, 0.0};
		glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);

		glEnable(GL_TEXTURE_2D); // This enables the texture mapping
		glBindTexture(GL_TEXTURE_2D, textureGround);
		
		// setup quadrics q
		GLUquadricObj *q;
		q = gluNewQuadric();
		gluQuadricNormals(q, GLU_SMOOTH);
		gluQuadricTexture(q, GL_TRUE);	
		glRotatef(-90.0, 1.0, 0.0, 0.0);
		// draw Disk
		gluDisk(q, 0.0, 5.0, 40, 5); 		// paramters: quadric, inner radius, outer radius, slices, rings
		glRotatef(+90.0, 1.0, 0.0, 0.0);
	    gluDeleteQuadric(q);  
		glDisable(GL_TEXTURE_2D);
	glEndList();
		
   	switch(species) {
		case 0:
			tree = new DeciduousTree(t, drawLeaves, drawBlossoms, drawApples);
	      	break;
		case 1:
			tree = new CoastRedwood(t);
			if (treeSize > 3)
				treeSize = 3;
			break;		      	
		case 2:
			tree = new Forsythia(t);
			break;		
		case 3:
			tree = new SalixAlba(t);
			break;
	    case 4:
	    	tree = new ArtificialTree(drawLeaves);
			glNewList(foliageList, GL_COMPILE);
				tree->drawFoliage(0.20);
			glEndList();
			tree->setDList(foliageList);
			break;
		default:
			tree = new DeciduousTree(t, drawLeaves, drawBlossoms, drawApples);
   	}
    	
    // Build display list for the tree
    glNewList(treeList, GL_COMPILE);
    	tree->draw(treeSize);
	glEndList();			
	delete tree;
}

// ---------- keyboard --------------------------------------------------

void keyboard(unsigned char key, int x, int y) {
	switch(key) {
		case 27: // ESC
	      	exit(0); // quit
	      	break;
	      	
	    case 32: // space: draw new Tree
	    	createScene();
	    	break;
	      
	    case 49: // '1': draw Deciduous Tree
	    	species = 0;
	    	treeSize = 6;
	    	createScene();
	    	break;
	    	
	   	case 50: // '2': draw Coast Redwood Tree
	    	species = 1;
	    	treeSize = 3;
	    	createScene();
	    	break;
	    	
	    case 51: // '3': draw Forsythia shrub
	    	species = 2;
	    	treeSize = 3;
	    	createScene();
	    	break;
    	
	   	case 52: // '4': draw Salix Alba
	    	species = 3;
	    	treeSize = 6;
	    	createScene();
	    	break;    	
	    	
	    case 53: // '5': draw Artificial Tree
	    	species = 4;
	    	treeSize = 7;
	    	createScene();
	    	break;   	
	    
	   	case 'x': // increase size of tree
	    	treeSize += 1;
	    	createScene();
	    break;
	    
	   	case 'y': // drecrease size of tree
	    	if (treeSize > 0)
	    		treeSize -= 1;
	    	createScene();
	    break;
	    
	   	case 'l': // draw Leaves
	   		drawLeaves = !drawLeaves;
	   		createScene();
	    	break;
	    	
	   	case 'a': // draw Apples
	    	drawApples = !drawApples;
	    	createScene();
	    break;
	    
	   	case 'b': // draw Blossoms
	    	drawBlossoms = !drawBlossoms;
	    	createScene();
	    break;
	    	
	    case 'f':
			if (fullscreen) {
    			glutReshapeWindow(800, 600);
    			glutPositionWindow(0, 0);
    		} else glutFullScreen();
    		fullscreen = !fullscreen;
    		break;
	}
  	glutPostRedisplay();
}

// ---------- reshape ---------------------------------------------------

void reshape(int w, int h) {

  // Called when the size of the window changes.
  
  viewer.ReViewport(w, h);
  glutPostRedisplay();
}

// ---------- mouse -----------------------------------------------------

void mouse(int button, int state, int x, int y) {

  // Called on mouse down and mouse up events.
  
  viewer.OnMouse(button, state, x, y);
  glutPostRedisplay();
}

// ---------- mouseMotion -----------------------------------------------

void mouseMotion(int x, int y) {

  // Called on mouse motion events -- when the use moves the mouse
  // in the window.

  viewer.OnMouseMotion(x, y);
  glutPostRedisplay();
}

// ---------- Main ------------------------------------------------------

int main(int argc, char **argv) {
  // Initialzie the GLUT Environment
  initGlut(argc, argv);
    
  // Initialize the OpenGL rendering
  initGraphics();
  
  // Build display lists
  treeList = glGenLists(3);
  groundList = treeList + 1;
  foliageList = groundList + 1;
  createScene();
  
  // Draw the scene (call display lists)
  drawScene();
  
  // Position the camera
  Vec3 center(0.0, 0.0, 0.0);
  double maxDist = 4;
  viewer.PositionCamera(center, maxDist);
  
  // Hand over the control to glut mail loop
  glutMainLoop();
}
