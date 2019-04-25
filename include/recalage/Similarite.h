#ifndef SIMILARITE_H
#define SIMILARITE_H

#include "Image.h"






class Similarite {
	public :
	virtual double execute(const Image& im1, const Image& mask1, const Image& im2 ,const Image& mask2)=0;

};



class SimilariteQuadratique : public Similarite {
	
	public:
	double execute(const Image& im1, const Image& mask1, const Image& im2 ,const Image& mask2);
// la fonction execute calcule le critere de similarite quadratique entre les images im1 et im2 realise sur le summport commun aux deux images defini par les masques mask1 et mask2
};


#endif
