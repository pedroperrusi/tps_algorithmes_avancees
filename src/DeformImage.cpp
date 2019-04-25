# include "recalage/DeformImage.h"

Image* DeformImage::execute(Image *src, Image *dest, Image *maskS, Image *maskD, Parametres p) {
	for(int i = 0; i < src->getHeight(); i++){
		for(int j = 0; j < src->getWidth(); j++) {
			int val_mask = 0;
			Point s = Point(i,j);
			Point sPrime = transf->execute(s, p);
			int x = round(sPrime.getX());
			int y = round(sPrime.getY());
			if(maskS->getValue(i,j) == 1){
				double inter_res = interp->Execute(src, sPrime, &val_mask);
				dest->setValue(x, y, inter_res);
				maskD->setValue(x, y, val_mask);
			}
			else if(maskS->getValue(i,j) == 0){
				dest->setValue(x, y, 0);
				maskD->setValue(x, y, val_mask);
			}
		}
	}
	return dest;
}
