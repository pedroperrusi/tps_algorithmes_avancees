#include "recalage/Similarite.h"

double SimilariteQuadratique::execute (const Image* im1, const Image* mask1, const Image* im2, const Image* mask2)
{
	double e = 0;
	int compteur=0;

	for (int i=0, i<im1.getWidth(), i++){
		for (int j=0, j<im1.getHeight, j++){
			if (mask1.getValue(i,j)==1 and mask2.getValue(i,j)==1)
				{
				e = e+(im1.getValue(i,j)-im2.getValue(i,j))**2;
				compteur++;
				}
		e=e/compteur;
	return e;
}
