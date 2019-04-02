#include <iostream>
#include <math.h>

#include "Point.h"
#include "Image.h"

class Interpolation {
public:
  // Class constructor
   virtual double Execute (Image *img, Point a, int *val_mask) = 0; //anotacao execute2
   
};

class Interpolation_Bilineaire{
	double Execute (Image *img, Point a, int *val_mask);
	
};
