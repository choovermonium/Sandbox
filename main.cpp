#include <iostream>

using namespace std;

class testClass
{
    public:
    testClass() {}
    virtual ~testClass() {}
    
    void OutputMethodNoArgs()
    {
        cout << "Hello World from method" << endl;
    }
    
    void OutputMethodWithArgs( const string& stringIn )
    {
        cout << stringIn << endl;
    }
    
};  // end testClass

int main()
{
    // testing direct route
   cout << "Hello World" << endl;
    
    // testing from string
   string outputString = "Hello World from string";
    cout << outputString << endl;
    
    // testing from function call
    testClass newObj;
    newObj.OutputMethodNoArgs();
    
    string passedString = "Hello World passed into function";
    newObj.OutputMethodWithArgs( passedString );
 
    return 0;
}