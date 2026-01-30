#ifndef FORSYTHIA_H_
#define FORSYTHIA_H_

#include "DeciduousTree.h"

class Forsythia : public DeciduousTree {
	
public:
	Forsythia(Texture t): DeciduousTree(t, true, false, false) {
	
		_lenMult = 0.8;
		_thiMult = 0.7;
 		_initThiFac = 0.008;
		_angleLimb = 20;
		_numLimbs = 6;
		_maxLeaves = 20;
		_leafSize = 0.1;	
	}
	
	virtual ~Forsythia() {}
	
	// Redefine imiplementation of method drawFoliage
	void drawFoliage(GLfloat s) {
		glScaled(s/2, s, s);
		
		GLfloat mat_ambient[]   = {0.5, 0.5, 0.2, 0.0};
		GLfloat mat_diffuse[]   = {0.8, 0.8, 0.3, 0.0};
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
	}
	
};

#endif /*FORSYTHIA_H_*/
