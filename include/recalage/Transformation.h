#ifndef _TRANSFORMATION_H_
#define _TRANSFORMATION_H_

#include <iostream>
#include <math.h>

#include "recalage/Parametres.h"
#include "recalage/Point.h"

class Transformation {
	private:
		Parametres param;
	public:
		virtual Point execute(Point, Parametres) = 0;
		void setParam(Parametres);
		Parametres getParam();
};

class TransformationRigide : public Transformation{
	public:
		Point execute(Point, Parametres);
};

#endif
