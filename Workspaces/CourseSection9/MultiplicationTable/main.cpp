// Section 9
// Nested Loops - Multiplication Table

#include <iostream>


int main(){
    
    for (int num1 {1}; num1 <= 10; ++num1){
        for (int num2 {1}; num2 <= 10; ++num2){
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        }
        std::cout << " ---------------------------------- " << std::endl;
    }
    
    
    
    return 0;
}