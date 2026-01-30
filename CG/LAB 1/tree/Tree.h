#ifndef TREE_H_
#define TREE_H_

class Tree {
public:
	Tree() {}
	virtual ~Tree() {}
	
	virtual void draw(int depth) {}
	virtual void drawFoliage(float s) {}
	void setDList(int fol) {_foliageList = fol;}

protected:
	int _foliageList;
	
};

#endif /*TREE_H_*/
