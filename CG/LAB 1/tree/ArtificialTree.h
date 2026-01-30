#ifndef ARTIFICIALTREE_H_
#define ARTIFICIALTREE_H_

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "Tree.h"

class ArtificialTree : public Tree {
public:
	ArtificialTree(bool drawLeaves);
	virtual ~ArtificialTree();
	
	void draw(int depth);
	void drawFoliage(GLfloat s);
	
private: 
	void drawTree(int depth, float len, float t);
	void drawCylQ(GLfloat len, GLfloat t);
	float power(float, int);
	
	bool _drawLeaves;
};

#endif /*ARTIFICIALTREE_H_*/
