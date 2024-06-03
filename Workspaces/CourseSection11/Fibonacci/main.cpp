// Section 11
// Recusion - Fibonacci: [0, 1, 1, 2, 3, 5, 8, .....
#include <iostream>

// function prototype
unsigned long long fibonacci(unsigned long long n);

// function implementation(definition)
unsigned long long fibonacci(unsigned long long n){
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // calling itself twice per CALL!
}


int main(){
    std::cout << fibonacci(5) << std::endl;
    std::cout << fibonacci(30) << std::endl;
    std::cout << fibonacci(40) << std::endl;
    
    std::cout << std::endl;
    return 0;
}