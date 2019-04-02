#include "recalage/Similarite.h"

double SimilariteQuadratique::execute ( Image* im1,  Image* mask1,  Image* im2,  Image* mask2)
{
	double e = 0;
	int compteur=0;

	for (int i=0; i<im1->getWidth(); i++){
		for (int j=0; j<im1->getHeight(); j++){
			if (mask1->getValue(i,j)==1 && mask2->getValue(i,j)==1)
				{
				e = e + pow((im1->getValue(i,j)-im2->getValue(i,j)),2);
				compteur++;
				}
		}
	}
		e=e/compteur;
	return e;
}
