#ifndef _DEFORMIMAGE_H_
#define _DEFORMIMAGE_H_

#include <iostream>

#include "recalage/Image.h"
// #include "recalage/Interpolation.h"
#include "recalage/Transformation.h"
#include "recalage/Parametres.h"

class DeformImage {
	private:
		Transformation *t;
		// Interpolation *i;
		Image mask;
		Image deform;
	public:
		DeformImage(Transformation *t/*, Interpolation *i*/){
			this->t = t;
			// this->i = i;
		};
		~DeformImage();
		
		inline Image* execute(Image *im, Image *mask, Parametres p) {
			for(int i = 0; i < im->getHeight(); i++){
				for(int j = 0; j < im->getWidth(); j++) {
					Point s = Point(i,j);
					Point sPrime = t->execute(s, p);
				}
			}
			return &this->deform;
		};
		
		inline void setMask(Image mask){
			this->mask = mask;
		};
		
		inline Image getMask(){
			return this->mask;
		};
};

#endif
