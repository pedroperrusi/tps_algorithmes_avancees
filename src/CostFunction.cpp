#include"recalage/CostFunction.h"

#include"recalage/DeformImage.h"


double CostFunction::Execute(Image* im1, Image* im2, Parametres p) {
	
	h = Image::getHeight(im1);
	w = Image::getWidth(im2);
	
	int i,j;

	for (i=0; i<w; i++){
		for (j=0; j<h; j++){
			mask1[i][j] = 1;
		}
	}
	Im2 = DeformImage::Execute(im1, mask1, p);
	mask2 = DeformImage::getMask();
	return Similarite(im1, mask1, im2, mask2);
	

}
