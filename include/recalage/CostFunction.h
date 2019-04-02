#ifndef H_COSTFUNCTION
#define H_COSTFUNCTION
 
 
#include"Image.h"
#include"Parametres.h"
#include"Similarite.h"
#include "DeformImage.h"

class CostFunction {
	DeformImage* d;
	Similarite* s;
	CostFunction(DeformImage*, Similarite*);
	double execute(Image*,Image*, Parametres);

};


 
#endif
