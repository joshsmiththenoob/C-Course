// Section 6
// The sizeof operator

#include <iostream>
#include <climits>

int main()
{
//  show How much storage of primitive data type is necessary
    std::cout << "sizeof information" << std::endl;
    std::cout << "================================" << std::endl;
    
// int types
    std::cout << "char : " << sizeof(char) << " bytes." << std::endl;
    std::cout << "int : " << sizeof(int) << " bytes." << std::endl;
    std::cout << "unsigned int : " << sizeof(unsigned int) << " bytes." << std::endl;
    std::cout << "short : " << sizeof(short int) << " bytes." << std::endl;
    std::cout << "long : " << sizeof(long) << " bytes." << std::endl;
    std::cout << "long long : "<< sizeof(long long) << " bytes." << std::endl;
    
    
    
//  float point types
    std::cout << "float : " << sizeof(float) << " bytes." << std::endl;
    std::cout << "double : " << sizeof(double) << " bytes." << std::endl;
    std::cout << "long double : " << sizeof(long double) << " bytes." << std::endl;
    
    
    
//  use values defined in <climits>
    std::cout << "================================" << std::endl;
    
    
    std::cout << "MINimum values:" << std::endl;
    std::cout << "char : " << CHAR_MIN << std::endl;  // CHAR_MIN is C++ marco(#define CHAR_MIN value), It will be changed to value by preprocessor before compiling 
    std::cout << "int : " << INT_MIN << std::endl; 
    std::cout << "short : " << SHRT_MIN << std::endl; 
    std::cout << "long : " << LONG_MIN << std::endl; 
    std::cout << "int : " << LLONG_MIN << std::endl; 

    std::cout << "================================" << std::endl;
    
    std::cout << "MAXimum values:" << std::endl;
    std::cout << "char : " << CHAR_MAX << std::endl;  // CHAR_MIN is C++ marco(#define CHAR_MIN value), It will be changed to value by preprocessor before compiling 
    std::cout << "int : " << INT_MAX << std::endl; 
    std::cout << "short : " << SHRT_MAX << std::endl; 
    std::cout << "long : " << LONG_MAX << std::endl; 
    std::cout << "int : " << LLONG_MAX << std::endl; 
    

    // sizeof operator(function) can alos be used with variable names
    std::cout << " =========================== " << std::endl;
    
    
    std::cout << "sizeof using variable names" << std::endl;
    
    
    int age {21};
    std::cout << "age is " << sizeof(age) << " bytes." << std::endl;
    // or
    std::cout << "age is " << sizeof age << " bytes." << std::endl;
    
    
    double wage {22.44};
    std::cout << "wage is " << sizeof(wage) << " bytes." << std::endl;
    // or
    std::cout << "wage is " << sizeof wage << " bytes." << std::endl;
    
    
    return 0;
}