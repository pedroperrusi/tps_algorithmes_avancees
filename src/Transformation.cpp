# include "recalage/Transformation.h"

void Transformation::setParam(Parametres& param){
	this->param = param;
}

Parametres Transformation::getParam(){
	return this->param;
}

Point TransformationRigide::execute(Point a, Parametres& param){			
	double x = a.getX();
	double y = a.getY();
	double tx = param[0];
	double ty = param[1];
	double theta = param[2];
	double xPrime = cos(theta)*x - sin(theta)*y + tx;
	double yPrime = sin(theta)*x + cos(theta)*y + ty;
	return Point(xPrime,yPrime);			
}
