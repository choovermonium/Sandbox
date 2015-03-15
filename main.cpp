#include <iostream>
#include "testClass.h"

int main()
{
    // testing direct route
   std::cout << "Hello World" << std::endl;
    
    // testing from string
    std::string outputString = "Hello World from string";
    std::cout << outputString << std::endl;
    
    // testing from function call
    testClass newObj;
    newObj.OutputMethodNoArgs();
    
    std::string passedString = "Hello World passed into function";
    newObj.OutputMethodWithArgs( passedString );
 
    return 0;
}