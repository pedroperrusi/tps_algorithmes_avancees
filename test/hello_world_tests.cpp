/**
 * Unittests file for the libraries
 */
#include "gtest/gtest.h"

#include "recalage/HelloWorld.h"

using namespace hello_world;

/**
 * Tests the constructor and its different calls ------------
 */
TEST(HelloWorld, welcome_test)
{
    HelloWorld hello_world_obj;
    std::string message = hello_world_obj.welcome();

    ASSERT_TRUE(message.compare("Hello World!") == 0);
}