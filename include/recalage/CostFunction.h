#ifndef H_COSTFUNCTION
#define H_COSTFUNCTION
 
 
#include"Image.h"
#include"Parametres.h"
#include"Similarite.h"
#include "DeformImage.h"

class CostFunction {
	Parametres p;
	DeformImage* d;
	Similarite* s;
	Transformation* t;
	Image* imRef;
	Image* imDef;

	
	CostFunction(Image*, Image*, Transformation*, DeformImage*, Similarite*,Parametres);
	double operator () (Parametres) const;

};


 
#endif
