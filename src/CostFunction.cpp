#include"recalage/CostFunction.h"

CostFunction::CostFunction(Transformation* t, DeformImage* d, Similarite* s,Parametres p)
{
	this->t = t;
	this->d = d;
	this->s = s;
	this->p = t->getParam();
}

double CostFunction::operator () (Parametres p) {
	int i,j;

	Image mask1;

	// imDef = d->execute(imRef, &mask1, p);
	// Image mask2 = d->getMask();
	// return s -> execute(imRef, &mask1, imDef, &mask2);
	

}
