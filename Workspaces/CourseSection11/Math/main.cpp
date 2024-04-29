// Section 11
// Math examples 

#include <iostream>
#include <cmath>  // required if we need to use "power (pow)" , "Square root (sqrt) " function

int main(){
    
    
    double num {0};
    
    std::cout << "Enter a number (double): ";
    std::cin >> num;
    
    std::cout << "The sqrt of " << num << " is: " << std::sqrt(num) << std::endl; // sqare root
    std::cout << "The cubed root of " << num << " is: " << std::cbrt(num) << std::endl; // cube root
    
    std::cout << "The sine of " << num << " is: " << std::sin(num) << std::endl;
    std::cout << "The cosine of " << num << " is: " << std::cos(num) << std::endl;
    
    std::cout << "The ceil of " << num << " is: " << std::ceil(num) << std::endl;
    std::cout << "The floor of " << num << " is: " << std::floor(num) << std::endl;
    std::cout << "The round of " << num << " is: " << std::round(num) << std::endl;


    double power{};
    std::cout << "\nEnter a power to raise " << num << " to: ";
    std::cin >> power;
    std::cout << num << " raised to the " << power << " power is: " << pow(num, power) << std::endl;
    
    
    
    
//    // Exercise POS (Point of Sale)
//    double bill_total {102.78};
//    int number_of_guests {5};
//    
//    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE YOUR CODE BELOW THIS LINE----
//    
//    double individual_bill {bill_total / number_of_guests};
//    int individual_bill_1 {static_cast<int>(std::floor(individual_bill))}; 
//    int individual_bill_2 {static_cast<int>(std::round(individual_bill))}; 
//    double individual_bill_3 {std::ceil(individual_bill * 100) / 100}; 
//    
//    std::cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
//    
    
    std::cout << std::endl;
    return 0;
}