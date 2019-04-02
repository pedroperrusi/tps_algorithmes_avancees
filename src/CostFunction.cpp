#include"recalage/CostFunction.h"

CostFunction::CostFunction(Image* imRef, Image* imDef, Transformation* t, DeformImage* d, Similarite* s,Parametres p)
{
	
	this->imRef = imRef;
	this->imDef = imDef;
	this->t = t;
	this->d = d;
	this->s = s;
	this->p = t->getParam();
}

double CostFunction::operator (Parametres p) const {
	int i,j;

	Image mask1;

	imDef = d->execute(imRef, &mask1, p);
	Image mask2 = d->getMask();
	return s -> execute(imRef, &mask1, imDef, &mask2);
	

}
