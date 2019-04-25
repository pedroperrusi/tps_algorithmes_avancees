/**
 * Unittests file for DeformImage
 */
#include "gtest/gtest.h"
#include <math.h>

#include "recalage/DeformImage.h"
#include "recalage/Transformation.h"
#include "recalage/Parametres.h"
#include "recalage/Image.h"
#include "recalage/Point.h"

/**
 * Tests the constructor and its different calls ------------
 */
TEST(DeformImage, deform_image_execute_0)
{
    Image im_test(3,3);
    Image im_mask(3,3);
    
    for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			im_test.setValue(i,j,0);
			im_mask.setValue(i,j,0);
		}
	}
	
	Parametres param_test(3);
	
	param_test[0] = 0;
	param_test[1] = 0;
	param_test[2] = 0;
	
	TransformationRigide trans_test = TransformationRigide();
	Interpolation_Bilineaire interp_test;
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			Point point_transformed = trans_test.execute(Point(i,j), param_test);
			int mask = 0;
			double output_interp = interp_test.Execute(&im_test, point_transformed, &mask);
			im_mask.setValue(point_transformed, mask);
			ASSERT_TRUE(output_interp == im_test.getValue(i,j));
		}
	}
	

}
