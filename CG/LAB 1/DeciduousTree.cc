#include "DeciduousTree.h"

int textureStem;
int textureLeaf;

DeciduousTree::DeciduousTree(Texture t) {
	DeciduousTree(t, true, false, false);
}

DeciduousTree::DeciduousTree(Texture t, bool drawLeaves, bool drawBlossoms, bool drawApples) {
	// Load textures and store texture id
	textureStem = t.loadTexture("data/cortex.bmp");
	textureLeaf = t.loadTexture("data/leaf.bmp");
	
	_drawLeaves = drawLeaves;
	_drawBlossoms = drawBlossoms;
	_drawApples = drawApples;
	
	_angle = 60;
	_lenMult = 0.78;
	_thiMult = 0.6;
	_initLenFac = 0.8;
 	_initThiFac = 0.016;
	_angleLimb = 30;
	_numLimbs = 3;
	_maxLeaves = 16;
	_stemFac = 0.6;
	_limbOffset = 0.52;
	_leafSize = 0.17;
}

DeciduousTree::~DeciduousTree() {
	
}

void DeciduousTree::drawStem(GLfloat len, GLfloat t) {
	GLfloat mat_ambient[]   = {0.45, 0.25, 0.1};
	GLfloat mat_diffuse[]   = {0.45, 0.25, 0.1};
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
	
	glBindTexture(GL_TEXTURE_2D, textureStem);
	
	glRotatef(-90, 1.0, 0.0, 0.0);
	GLUquadricObj *q;
	q = gluNewQuadric();
	gluQuadricNormals(q, GLU_SMOOTH);
	gluQuadricTexture(q, GL_TRUE);	
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, textureStem);
	gluCylinder(q, t, _stemFac*t, len, 16, 4);	//GLUquadricObj *qobj, baseRadius, topRadius,    
    glDisable(GL_TEXTURE_2D);          										
    glRotatef(90, 1.0, 0.0, 0.0);
    gluDeleteQuadric(q);  					//Destroys the quadrics object q and frees up any memory used by it
};

void DeciduousTree::drawFoliage(GLfloat s) {
	glBindTexture(GL_TEXTURE_2D, textureLeaf);
	glEnable(GL_TEXTURE_2D);
	
	glScaled(s, s, s);
	
	GLfloat mat_ambient[]   = {0.1, 0.9, 0.1, 0.0};
	GLfloat mat_diffuse[]   = {0.05, 0.8, 0.0, 0.05};
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
	
	
	glNormal3f(0.0, 0.0, -1.0);
	glBegin(GL_POLYGON);
		glTexCoord2f (0.5, 0.0);    glVertex3f(0.0, 0.0, 0.0);
		glTexCoord2f (0.834, 0.083);  glVertex3f(0.167, 0.083, 0.0);
		glTexCoord2f (0.95, 0.208);  glVertex3f(0.225, 0.208, 0.0);
		glTexCoord2f (1.0, 0.42);   glVertex3f(0.25, 0.42, 0.0);
		glTexCoord2f (0.96, 0.583);  glVertex3f(0.23, 0.583, 0.0);
		glTexCoord2f (0.834, 0.75);   glVertex3f(0.167, 0.75, 0.0);
		glTexCoord2f (0.5, 1.0);    glVertex3f(0.0, 1.0, 0.0);
		glTexCoord2f (0.166, 0.75);   glVertex3f(-0.167, 0.75, 0.0);
		glTexCoord2f (0.04, 0.583);  glVertex3f(-0.23, 0.583, 0.0);
		glTexCoord2f (0.0, 0.42);   glVertex3f(-0.25, 0.42, 0.0);
		glTexCoord2f (0.5, 0.208);  glVertex3f(-0.225, 0.208, 0.0);
		glTexCoord2f (0.166, 0.083);  glVertex3f(-0.167, 0.083, 0.0);
	glEnd();
	
	glDisable(GL_TEXTURE_2D);
}

/* Draws a scrunched sphere which should look like a blossom */
void DeciduousTree::drawBlossom(GLfloat s) {
	glPushMatrix();
	glRotatef(90, 1.0, 0.0, 0.0);
	glScaled(s, s/3, s);
	
	GLfloat mat_ambient[]   = {0.8, 0.8, 0.8, 1.0};
	GLfloat mat_diffuse[]   = {0.6, 0.5, 0.5, 1.0};
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
		
	GLUquadricObj *q;
	q = gluNewQuadric();
	gluQuadricNormals(q, GLU_SMOOTH);

	gluSphere(q, 1.0, 10, 10);
    gluDeleteQuadric(q);  					//Destroys the quadrics object q and frees up any memory used by it
    glPopMatrix();
	
}

/* Draw an apple */
void DeciduousTree::drawApple(GLfloat s) {
	glPushMatrix();
	glScaled(s, s, s);
	
	GLfloat mat_ambient[]   = {0.4, 0.1, 0.1};
	GLfloat mat_diffuse[]   = {0.5, 0.1, 0.1};
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);

	GLUquadricObj *q;
	q = gluNewQuadric();
	gluQuadricNormals(q, GLU_SMOOTH);

	gluSphere(q, 1.0, 10, 10); //GLUquadricObj *qobj, radius, slices, stacks             										

    gluDeleteQuadric(q);  					//Destroys the quadrics object q and frees up any memory used by it
    glPopMatrix();
}

void DeciduousTree::draw(int depth) {
	drawTree(depth, _initLenFac * power(1.2, depth), _initThiFac * power(1.6, depth));
}

void DeciduousTree::drawTree(int depth, float len, float t) {
	len *= _lenMult;
	float curLen = len*((rand()/(float)RAND_MAX)/2 + 0.75); // vary the length of each stem by random
	t *= _thiMult;
	
	drawStem(curLen, t);
	
	// draw Leaves
	if (_drawLeaves) {
		int numOfLeaves = (_maxLeaves-depth*depth);
		for (int i=0; i<numOfLeaves; i++) {
			float posLen = curLen * (rand()/(float)RAND_MAX);
			float posAngle = 360 * (rand()/(float)RAND_MAX);
			
			glPushMatrix();
			glRotatef(posAngle, 0.0, 1.0, 0.0);
			glTranslatef(0.0, posLen, t);
			glRotatef(_angle, 1.0, 0.0, 0.0);
			
			drawFoliage(_leafSize);
				
			glPopMatrix();			
		}
	}
	
	// draw blossoms
	if (_drawBlossoms) {
		int numOfBlossoms = (10-depth*depth);
		for (int i=0; i<numOfBlossoms; i++) {
			float posLen = curLen * (rand()/(float)RAND_MAX);
			float posAngle = 360 * (rand()/(float)RAND_MAX);
			
			glPushMatrix();
			glRotatef(posAngle, 0.0, 1.0, 0.0);
			glTranslatef(0.0, posLen, t+0.02);
			
			drawBlossom(0.03);
				
			glPopMatrix();			
		}
	}
	
	// draw apples
	if ((_drawApples) && (depth > 0)) {
		int numOfApples = (5-depth);
		for (int i=0; i<numOfApples; i++) {
			glPushMatrix();
			float posLen = curLen * (rand()/(float)RAND_MAX);
			glTranslatef(0.0, posLen, t);
			drawApple(0.04);
			
			glPopMatrix();
		}
	}
	

	if (depth != 0) {
		glPushMatrix();
		glRotatef(120*(rand()/(float)RAND_MAX+0.5), 0.0, 1.0, 0.0);	
			
		// draw one limb at the end of the stem
		glPushMatrix();
		glTranslatef(0.0, curLen*0.95, 0.0);
		glRotatef(_angleLimb, 0.0, 0.0, 1.0);
		drawTree(depth-1, len, t);
		glPopMatrix();

		// draw two other limbs
		for (int i=0; i<(_numLimbs-1); i++) {
			glRotatef((360/_numLimbs)*(rand()/(float)RAND_MAX+0.5), 0.0, 1.0, 0.0);
			glPushMatrix();
			glTranslatef(0.0, ((rand()/(float)RAND_MAX)*(1-_limbOffset) + _limbOffset) * curLen ,0.0);
			glRotatef(_angleLimb, 0.0, 0.0, 1.0);
			drawTree(depth-1, len, t);
			glPopMatrix();
		}
		glPopMatrix();
	}

}

float DeciduousTree::power(float base, int exp) {
	if (exp==1)
		return base;
	else if (exp==0)
		return 1.0; 
	else if (exp >-1)
		exp--;
		
	return base * (power(base,exp));	
}
