/**
 * 
 * Hello World Library Test File
 * 
 * This file exemplify a library declaration.
 * We will call those functions in the app and test submodules.
 * 
 */

#include "recalage/HelloWorld.h"
#include "recalage/Image.h"
#include "recalage/Parametres.h"
#include "recalage/DeformImage.h"
#include "recalage/Transformation.h"

#include "recalage/Parametres.h"
#include "recalage/Image.h"
#include "recalage/Similarite.h"
#include "recalage/CostFunction.h"
#include "recalage/Interpolation.h"

#include <iostream>

namespace hello_world
{
    std::string HelloWorld::welcome()
    {
        return "Hello World!";
    }
} // namespace hello_world