#ifndef H_COSTFUNCTION
#define H_COSTFUNCTION
 
 
#include"Image.h"
#include"Parametres.h"
#include"Similarite.h"
#include "DeformImage.h"

class CostFunction {

	Similarite* s;
	double Execute(Image*,Image*, Parametres p);

}


 
#endif
