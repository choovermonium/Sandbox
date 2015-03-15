#include <iostream>
#include "testClass.h"

testClass::testClass()
{
}

testClass::~testClass()
{
}

void testClass::OutputMethodNoArgs()
{
    std::cout << "Hello World from method" << std::endl;
}
    
void testClass::OutputMethodWithArgs( const std::string& stringIn )
{
    std::cout << stringIn << std::endl;
}