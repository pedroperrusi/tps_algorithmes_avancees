#ifndef SIMILARITE_H
#define SIMILARITE_H

#include "Image.h"






class Similarite {
	public :
	virtual double execute(Image** im1, Image** mask1, Image** im2, Image** mask2)=0;

};



class SimilariteQuadratique : public Similarite {
	
	public:
	double execute(Image** im1, Image** mask1, Image** im2, Image** mask2);

};


#endif
