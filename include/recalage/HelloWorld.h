/**
 * Hello World Class Definition
 * 
 * 
 */
#ifndef _HELLOWORLD_H_
#define _HELLOWORLD_H_

#include <iostream>
#include <string>

/**
 * It's a good C++ practice to keep your code inside namespaces
 * 
 */
namespace hello_world
{

/**
 * Hello World Class Definition
 * 
 */
class HelloWorld
{
/* Public functions of a class define its interface with the world */
public:
  // Class constructor
  HelloWorld()
  {

  };
  
  // Class destructor
  ~HelloWorld()
  {

  };

  /**
   * Welcome message
   */
  std::string welcome();
};
} // namespace hello_world
#endif // _HELLOWORLD_H_