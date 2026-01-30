#ifndef SALIXALBA_H_
#define SALIXALBA_H_

#include "DeciduousTree.h"

class SalixAlba : public DeciduousTree {
	
public:
	SalixAlba(Texture t): DeciduousTree(t, true, false, false) {
			
		_lenMult = 0.78;
		_thiMult = 0.63;
 		_initThiFac = 0.01;
		_angleLimb = 16;
		_numLimbs = 2;
		_maxLeaves = 40;
		_limbOffset = 0.52;
		_leafSize = 0.17;
	}
	
	virtual ~SalixAlba() {}
		
};

#endif /*SALIXALBA_H_*/
