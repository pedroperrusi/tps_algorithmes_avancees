#include "recalage/Interpolation.h"
//notacao 
//weight(H) = W 
//length = L


double Interpolation_Bilineaire::Execute (Image *img, Point a, int *val_mask){
	int x = a.getX();
	int y = a.getY();
	if((x < 0) || (x > img->getHeight()-1) || (y < 0) || (y > img->getWidth()-1))
	{
		*val_mask = 0;
		return 0;
	} 
	else
	{
		int i1, i2, j1, j2;
		double dx, dy, dfx, dfy, dfxy, res;
		
		i1 = floor(x);
		j1 = floor(y);
		if(i1 == img->getHeight()-1)
			i1--;
		if(j1 == img->getWidth()-1)
			j1--;
		i2 = i1+1;
		j2 = j1+1;
		//the Point (x,y) is inside of the square:(i1,j1),(i1,j2),(i2,j2),(i2,j1)
		
		dx = x - i1;
		dy = y - j1;
		dfx = img->getValue(i2,j1)-img->getValue(i1,j1);
		dfy = img->getValue(i1,j2)-img->getValue(i1,j1);
		dfxy = img->getValue(i1,j1)+img->getValue(i2,j2)-img->getValue(i2,j1)-img->getValue(i1,j2);
		
		//value of I at the Point(x,y) is res
		res = img->getValue(i1,j1)+dfx*dx+dfy*dy+dx*dy*dfxy;
		*val_mask = 1;
		return res;
	}
	
}
