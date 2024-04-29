#include <iostream>

int main()
{
//    std::cout << "Hello World!" << std::endl;

//    std::cout << "Hello";
//    std::cout << "World!" << std::endl;

//  new line character '\n'
//    std::cout << "Hello Wrold!" << std::endl;
//    std::cout << "Hello" << " World!" << std::endl;
//    std::cout << "Hello" << " World!\n";
//    std::cout << "Hello\nOut\nThere\n";

//  declare the variable
    int num1;
    int num2;
    double num3;
    
//    std::cout << "Enter an integer: ";
//    std::cin >> num1;
//    std::cout << "You entered: "<< num1 << std::endl;

//  Input will be in stream buffer first (white spaces will be ignored), and compiler will process every character in buffer which makes sense for variable
//    std::cout << "Enter a first integer: ";
//    std::cin >> num1;
//    
//    std::cout << "Enter a second integer: ";
//    std::cin >> num2;
//    
//    std::cout << "You enter the First Number: " << num1 << ", and the Second Number: " << num2 << std::endl;

//  We can chain the extraction operator that num1 & num2 will receive 2 values separated with a space(blank)
//    std::cout << "Enter 2 integers separated with a space: ";
//    std::cin >> num1 >> num2;
//    std::cout << "You entered " << num1 << " and " << num2 << std::endl;



//  I/O in float
//    std::cout << "Enter a double: ";
//    std::cin >> num3;
//    
//    std::cout << "You entered: " << num3 << std::endl;
    
    
    std::cout <<"Enter an interger: ";
    std::cin >> num1;
    
    std::cout << "Enter a double: ";
    std::cin >> num3;
    
    std::cout << "The integer is: " << num1 << std::endl;
    std::cout << "And the double is " << num3 << std::endl;
}