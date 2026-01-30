#ifndef COASTREDWOOD_H_
#define COASTREDWOOD_H_

#include "DeciduousTree.h"

class CoastRedwood : public DeciduousTree {
	
public:
	CoastRedwood(Texture t): DeciduousTree(t, true, false, false) {
		
		_lenMult = 0.1;
		_thiMult = 0.3;
		_initLenFac = 45.0;
		_initThiFac = 0.086;
		_angleLimb = 80;
		_numLimbs = 30;
		_maxLeaves = 1;
		_stemFac = 0.1;
		_limbOffset = 0.3;
		_leafSize = 0.06;		
	}
	
	virtual ~CoastRedwood() {}
};

#endif /*COASTREDWOOD_H_*/
