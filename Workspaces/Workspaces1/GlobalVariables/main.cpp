// Section 6
// Global and Local Variables
#include <iostream>

int age {18}; //Global variable

int main() // When main function was called, it will "look locally" first!
{
    int age{15};  // Local variable
    
    std::cout << "Your age is : " << age << std::endl;
    
    return 0;
}