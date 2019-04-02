#ifndef SIMILARITE_H
#define SIMILARITE_H

#include <math.h>

#include "Image.h"

class Similarite {
	public :
	virtual double execute(Image*, Image* , Image*,Image*)=0;

};



class SimilariteQuadratique : public Similarite {
	
	public:
	double execute(Image*, Image* , Image*,Image*);

};


#endif
