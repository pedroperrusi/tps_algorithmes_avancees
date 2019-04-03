/**
 * Unittests file for Transformation
 */
#include "gtest/gtest.h"

#include "recalage/Image.h"
#include "recalage/Point.h"
#include "recalage/Transformation.h"
#include "recalage/Parametres.h"

/**
 * Tests the constructor and its different calls ------------
 */
TEST(Transformation, transformation_get_set_param)
{
    Parametres param_test(3);
	
	p_test[0] = 0;
	p_test[1] = 0;
	p_test[2] = 0;
	
	TransformationRigide trans_test = Transformation();
	Point point_test = Point(3,4);
	
    trans_test.execute(param_test, point_test);
}

