/**
 * 
 * Hello World Library Test File
 * 
 * This file exemplify a library declaration.
 * We will call those functions in the app and test submodules.
 * 
 */

#include "recalage/HelloWorld.h"

#include <iostream>

namespace hello_world
{
    std::string HelloWorld::welcome()
    {
        return "Hello World!";
    }
} // namespace hello_world