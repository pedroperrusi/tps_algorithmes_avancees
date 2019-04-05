#ifndef _DEFORMIMAGE_H_
#define _DEFORMIMAGE_H_

#include <iostream>
#include <math.h>

#include "recalage/Image.h"
#include "recalage/Interpolation.h"
#include "recalage/Transformation.h"
#include "recalage/Parametres.h"

class DeformImage {
	private:
		Transformation *transf;
		Interpolation *interp;
	public:
		DeformImage(Transformation *t, Interpolation *i){
			this->transf = t;
			this->interp = i;
		};
		~DeformImage();

		Image* execute(Image *src, Image *dest, Image *maskS, Image *maskD, Parametres p);
};

#endif
