#ifndef H_COSTFUNCTION
#define H_COSTFUNCTION
 
 
#include"Image.h"
#include"nr3.h"
#include"Similarite.h"
#include "DeformImage.h"

//typedef NRvector<Doub> VecDoub;

class CostFunction {
	DeformImage* d;
	Similarite* s;
	Transformation* t;
	Image* imRef;
	Image* imADef;

	//Constructeur : permet d'instantier les objets des autres classes pour pouvoir l'utiliser ensuite dans la fonction de cout
	CostFunction(Image* imRef     , //Image de reference
		     	Image* imADef     , //Image a deformer
	            Transformation* t, //Appel de la fonction transformation
		     	DeformImage* d   , //Appel de la fonction déformation
		     	Similarite* s); //Appel de la fonction de similarité
		     
	//Fonction cout : on surcharge l'operateur d'appel de fonction pour pouvoir calculer la fonction cout. Celle-ci va deformer une image pour ensuire la comparer avec une image de reference grace au critere de similarite. On met en argument un VecDoub pour être compatible avec le fichier amoeba.h
	double operator () (VecDoub& parametres); //Parametres de la transformation
	

};


 
#endif
