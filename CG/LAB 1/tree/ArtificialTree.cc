#include "ArtificialTree.h"

ArtificialTree::ArtificialTree(bool drawLeaves) {
	_drawLeaves = drawLeaves;
}

ArtificialTree::~ArtificialTree() {
}

void ArtificialTree::drawFoliage(GLfloat s) {
	glPushMatrix();
	glScaled(s, s, s);
	
	GLfloat mat_ambient[]   = {0.1, 0.6, 0.1, 0.0};
	GLfloat mat_diffuse[]   = {0.1, 0.6, 0.1, 0.0};
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
	
	glNormal3f(0.0, 0.0, -1.0);
	glBegin(GL_POLYGON);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.167, 0.083, 0.0);
		glVertex3f(0.225, 0.208, 0.0);
		glVertex3f(0.25, 0.42, 0.0);
		glVertex3f(0.23, 0.583, 0.0);
		glVertex3f(0.167, 0.75, 0.0);
		glVertex3f(0.0, 1.0, 0.0);
		glVertex3f(-0.167, 0.75, 0.0);
		glVertex3f(-0.23, 0.583, 0.0);
		glVertex3f(-0.25, 0.42, 0.0);
		glVertex3f(-0.225, 0.208, 0.0);
		glVertex3f(-0.167, 0.083, 0.0);
	glEnd();
	glPopMatrix();
}

void ArtificialTree::drawCylQ(GLfloat len, GLfloat t) {
	glPushMatrix();
	glRotatef(-90, 1.0, 0.0, 0.0);
	GLUquadricObj *q;
	q = gluNewQuadric();
	gluQuadricNormals(q, GLU_SMOOTH);
	gluCylinder(q, t, t, len, 16, 4);	//GLUquadricObj *qobj, baseRadius, topRadius,
                                          							// height, slices, stacks
    glPopMatrix();
}

void ArtificialTree::draw(int depth) {
	drawTree(depth, 0.35 * power(1.26, depth), 0.008 * power(1.6, depth));
}

void ArtificialTree::drawTree(int depth, float len, float t) {
	len *= 0.8;
	GLfloat angle = 30;
	t *= 0.6;
	
	GLfloat brown[] = {0.518, 0.23, 0.0};
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, brown);
	drawCylQ(len, t);

	if (depth == 0) {  // Draw leaves
		if (_drawLeaves) {
			GLfloat angle = 60;
			glPushMatrix();
			glTranslatef(0.0, len, 0.0);
			glRotatef(30, 0.0, 1.0, 0.0);
			
			GLfloat green[] = {0.1, 0.6, 0.1};
			glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, green);
			
			// Draw six leaves
			for (int i=0; i<6; i++) {
				glRotatef(angle, 1.0, 0.0, 0.0);
				glCallList(_foliageList);
				glRotatef(-angle, 1.0, 0.0, 0.0);
				glRotatef(60, 0.0, 1.0, 0.0);
			}
			glPopMatrix();		
		}
	} else {
		glPushMatrix();	
		glTranslatef(0.0, len*0.95, 0.0);
		glRotatef(30, 0.0, 1.0, 0.0);
		glRotatef(angle, 0.0, 0.0, 1.0);
	
		drawTree(depth-1, len, t);
		glRotatef(-angle, 0.0, 0.0, 1.0);
		glRotatef(120, 0.0, 1.0, 0.0);
		glRotatef(angle, 0.0, 0.0, 1.0);
		
		drawTree(depth-1, len, t);
		glRotatef(-angle, 0.0, 0.0, 1.0);
		glRotatef(120, 0.0, 1.0, 0.0);
		glRotatef(angle, 0.0, 0.0, 1.0);
	
		drawTree(depth-1, len, t);
		glPopMatrix();
	}
}


float ArtificialTree::power(float base, int exp) {
	if (exp==1)
		return base;
	else if (exp==0)
		return 1.0; 
	else if (exp >-1)
		exp--;
		
	return base * (power(base,exp));
	
}
