#include <iostream>

int main()
{
    // Declare and Initialize int type variable num1, num2, to 0
    int num1{}, num2{};
//    
    std::cout << std::boolalpha;
//    std::cout << "Enter 2 integers separated by a space: ";
//    std::cin >> num1 >> num2;
//    
//    // Get Output of Comparison of two variables
//    std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
//    std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
//    std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
//    std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;
//    
    
    
    // Compare two constants
    const int lower {10};
    const int upper {20};
    
    std::cout << "\nEnter an integer that is greater than " << lower << ":";
    std::cin >> num1;
    std::cout << num1 << " > " << lower << " is " << (num1 > lower) << std::endl;
    
    std::cout << "\nEnter an integer that is less than or equal to " << upper << ":";
    std::cin >> num1;
    std::cout << num1 << " <= " << upper << " is " << (num1 <= upper) << std::endl;
    
    
    return 0;
}
