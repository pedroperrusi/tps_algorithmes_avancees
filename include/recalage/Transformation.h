#ifndef _TRANSFORMATION_H_
#define _TRANSFORMATION_H_

#include <iostream>

#include "recalage/Parametres.h"
#include "recalage/Point.h"

class Transformation {
	public:
		virtual Point execute(Point a, Parametres param) = 0;
};

#endif
