#include"recalage/CostFunction.h"

CostFunction::CostFunction(DeformImage* d, Similarite* s)
{
	this->d = d;
	this->s = s;
}

double CostFunction::execute(Image* im1, Image* im2, Parametres p) {
	int i,j;

	Image mask1;

	im2 = d->execute(im1, &mask1, p);
	Image mask2 = d->getMask();
	return s->execute(im1, &mask1, im2, &mask2);
	

}
