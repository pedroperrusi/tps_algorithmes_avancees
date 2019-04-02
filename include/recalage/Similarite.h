#ifndef SIMILARITE_H
#define SIMILARITE_H

#include "recalage/Image.h"






class Similarite {
	public :
	virtual double execute(const Image*, const Image* , const Image*,const Image*)=0;

};



class SimilariteQuadratique : public Similarite {
	
	public:
	double execute(const Image*, const Image* , const Image*,const Image*);

};


#endif
