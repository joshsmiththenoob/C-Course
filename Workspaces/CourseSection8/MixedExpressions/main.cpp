// Section 8
// Mixed Type Expressions

/*
 * Pesudo Code:
 * 1. Ask the user to Enter 3 integers
 * 2. Calculate the sum of the integers then
 * 3. Calculate the average of the 3 integers.
 * 4. Display the 3 integers entered
 * 5. Display the sum of 3 integers and
 * 6. the average of 3 integers.
 */

#include <iostream>

int main()
{
    
    int total {}; // Declare int variable and initialize to 0 on {}
    int num1 {}, num2 {}, num3 {}; // We can Declare int and intialize value 0 to different variables in one line~
    // Notice : if we initialize the same data type to different variables, don't forget to initialize them (use Initializer {})
    const int count {3};
    
    std::cout << "Enter 3 Integers separated by spaces(blanks): ";
    std::cin >> num1 >> num2 >> num3; // the Integers user entered in console buffers will be assigned into 3 variables gradually by spaces.
    
    // get total number
    total = num1 + num2 + num3; 
    
    // get average : total / count
    double average{};
    // if we want average double -> 1. using static_cast to manually convert one of variables to double 2. then C++ or coerce another int varable into converting to double data type
    average = static_cast<double>(total) / count;
//    average = (double)total / count;  // Old-style method(in C & C++) to manually convert data type of variable; lt's not restrictive than static_cast method but more dangerous.
  
    std::cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << std::endl;
    std::cout << "THe sum of the numbers is : " << total << std::endl;
    std::cout << "The average of the numbers is : " << average << std::endl;
    std::cout << std::endl;
    
    return 0;
}