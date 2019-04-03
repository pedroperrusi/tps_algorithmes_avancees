/**
 * Unittests file for Image
 */
#include "gtest/gtest.h"

#include "recalage/Image.h"

/**
 * Tests the constructor and its different calls ------------
 */
TEST(Image, image_get_set_value)
{
    Image im;

    im.resize(3,3);

    im.setValue(1, 2, 3);

    ASSERT_TRUE(im.getValue(1, 2) == 3);
}

TEST(Image, image_multiple_constructors)
{
    Image im1, im2(3,3);
    im1.resize(3,3);

    im1.setValue(1, 2, 3);
    im2.setValue(1, 2, 3);

    ASSERT_TRUE(im1.getValue(1, 2) == 3);
    ASSERT_TRUE(im2.getValue(1, 2) == 3);
}