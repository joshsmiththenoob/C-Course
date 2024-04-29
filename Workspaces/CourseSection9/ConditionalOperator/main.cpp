// Section 9
// Conditional Operator
#include <iostream>

int main(){
    
//    int num {};
//    std::cout << "Enter an integer: ";
//    std::cin >> num;
//    
//    
//    // regular if - else if conditional
//    if (num % 2 == 0){
//        std::cout << num << " is even" << std::endl;
//    }else{
//        std::cout << num << " is odd" << std::endl;
//    }
//    
//    // Rewrite if - else if statement with conditional operator
//    std::cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << std::endl;
    
    
    int num1 {}, num2 {};
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> num1 >> num2;
    
    if (num1 != num2){
        std::cout << "Largest: " << ((num1 > num2) ? num1 : num2) << std::endl;
        std::cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << std::endl;
    } else{
      std::cout << "The numbers are the same" << std::endl;  
    }
    
    return 0;
} 