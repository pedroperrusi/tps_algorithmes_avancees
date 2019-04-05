/**
 * Unittests file for Similarity
 */
#include "gtest/gtest.h"

#include "recalage/nr3.h"
#include "recalage/Similarite.h"
#include "recalage/Image.h"

/**
 * Tests the constructor and its different calls ------------
 */
TEST(Similarite, similarite_test)
{
    Image im1(3,3);
	Image im2(3,3);

	Image mask1(3,3);
	Image mask2(3,3);

	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			im1.setValue(i,j,i+j);
			im2.setValue(i,j,2);
			mask1.setValue(i,j,1);
			mask2.setValue(i,j,1);
			}
		
		}

	Similarite *s=new SimilariteQuadratique();
	double a = s->execute(im1,mask1,im2,mask2);

	double tolerance = 0.00001;

	// std::cout << a << std::endl;

	ASSERT_TRUE((a - 1.3333333333) < tolerance);
}
