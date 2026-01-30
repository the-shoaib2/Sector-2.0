#ifndef DECIDUOUSTREE_H_
#define DECIDUOUSTREE_H_

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include "Tree.h"
#include "texture.h"

class DeciduousTree : public Tree {
	
public:
	DeciduousTree(Texture t);
	DeciduousTree(Texture t, bool drawLeaves, bool drawBlossoms, bool drawApples);
	virtual ~DeciduousTree();
	
	void draw(int depth);
	virtual void drawFoliage(GLfloat s);
	
protected:

	float _angle;
	float _lenMult;
	float _thiMult;
	float _initLenFac;
	float _initThiFac;
	float _angleLimb;
	float _stemFac;
	float _limbOffset;
	float _leafSize;
	int _numLimbs;
	int _maxLeaves;
	
private:
	void drawTree(int depth, float len, float t);	
	void drawStem(GLfloat len, GLfloat t);
	void drawApple(GLfloat s);
	void drawBlossom(GLfloat s);
	float power(float base, int exp);
	
	bool _drawLeaves;
	bool _drawBlossoms;
	bool _drawApples;
};

#endif /*DECIDUOUSTREE_H_*/
