#include <iostream>

int main()
{
    
    int num1 {10}; // declare int to num1 & initialize the num1 for giving value 10 but it's NOT assignment, it's INITIALIZATION 
    int num2 {20};
    
    // Assignment = when you change a value that already exist in the variable.
    
    num1 = 100; // assign value 100 to variable num1
    
    
    std::cout << "num1 is " << num1 << std::endl;
    std::cout << "num2 is " << num2 << std::endl;  


//    std::cout << std::boolalpha; // Show true/false instead of 1/0
//    bool accident{false};
//    std::cout << "Please type got accident or not?: " ;
//    std::cin >> std::boolalpha; // let Input value which accepted by console will turn into  true/false instead of 1/0
//    std::cin >> accident;
//    std::cout << accident << std::endl;
//    if (!accident)
//        std::cout << "The driver don't have any accident in the past" << std::endl;
//    else
//        std::cout << "DAMMN, The driver got accident record in the past!! Consider it about hiring this deliver driver!!" << std::endl;

    return 0;
    

    
}