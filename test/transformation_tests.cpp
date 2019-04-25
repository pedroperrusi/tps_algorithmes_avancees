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
	
	param_test[0] = 0;
	param_test[1] = 0;
	param_test[2] = 0;
	
	TransformationRigide trans_test = TransformationRigide();
	Point point_test = Point(3,4);
	
    Point outPoint = trans_test.execute(point_test, param_test);

    ASSERT_TRUE(outPoint.getX() == point_test.getX());
    ASSERT_TRUE(outPoint.getY() == point_test.getY());
}