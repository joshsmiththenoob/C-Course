// Section 11
// Recursion - Factorial
#include <iostream>

// function prototype
unsigned long long int factorial(unsigned long long int);


// function implementation(definition)
unsigned long long int factorial(unsigned long long int n){
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}


int main(){
    std::cout << factorial(3) << std::endl;
    std::cout << factorial(8) << std::endl;
    std::cout << factorial(12) << std::endl;
    std::cout << factorial(20) << std::endl;
    
    std::cout << std::endl;
    return 0;
}
