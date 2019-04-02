/**
 * @file main.cc
 * @author Pedro Henrique S. Perrusi (pedro.perrusi@gmail.com)
 * @brief Main file for My friend Bishopproject.
 * @version 1.0
 * @date 2019-02-10
 * 
 * @copyright Copyright (c) 2019 Pedro Henrique S. Perrusi
 * 
 */
#include "recalage/HelloWorld.h"

#include <iostream>
#include <string>

/**
 * @brief Main function of my_friend_bishop project
 */
int main()
{
    hello_world::HelloWorld obj;

    std::cout << obj.welcome() << std::endl;

    return EXIT_SUCCESS;
}
