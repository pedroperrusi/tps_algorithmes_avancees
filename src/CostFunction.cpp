#include"recalage/CostFunction.h"


//Constructeur
CostFunction::CostFunction(Image* imRef, Image* imADef, Transformation* t, DeformImage* d, Similarite* s)
{	
	this->imRef = imRef;
	this->imADef = imADef;
	this->t = t;
	this->d = d;
	this->s = s;
}

/////Fonction Cout/////
//Surcharge de l'operateur de l'appel de fonction
double CostFunction::operator () (VecDoub& parametres) {
	
	int height = imRef->getHeight();
	int width = imRef->getWidth();
	int height2 = imADef->getHeight();
	int width2 = imADef->getWidth();
	
	Image mask1(height, width);
	for (int i=0;i<height;i++) {
		for (int j=0; j<width; j++) {
		
			mask1.setValue(i,j,1.);
		}
	
	}
	
	Image mask2(height2,width2);
	for (int i=0;i<height2;i++) {
		for (int j=0; j<width2; j++) {
		
			mask2.setValue(i,j,1.);
		}
	
	}
	
	d->execute(imRef, &mask1, imADef, &mask2, parametres);
	return s -> execute(*imRef, mask1, *imADef, mask2);
	

}

