/* main.cpp */
#include "MathExample.h"
#include <iostream>
int main()
{
    double c;
    std::cout << "Please Enter Your Favorite Number: ";
    std::cin >> c;
    double number1 = f1(c);
    double number2 = f2(number1);
    std::cout << number2 << " was my number through the MathExample.h"<< std::endl;
    return 0;
}

/* end of main.cpp*/
