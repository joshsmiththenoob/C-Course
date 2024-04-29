// Section 9
// if Statement

/* Pseudo Code 
 * 1. User Enter the integer
 * 2. set 1st if statement: Check integer is equal to or greater than 10;
 * 3. set 2nd if statement: Check integer is equal to or less than 100;
 * 4. set 3rd if statement: Check integer is within that balance(10-100) ;
 * 5. set 4th if statement: Check integer is on the bound 10, 100
 * 
 * 
 * 
 * */

#include <iostream>

  
 
 


int main(){
    int num {}; 
    const int min {10};
    const int max {100};
    
    std::cout << "Enter a number between " << min << " and " << max << ": ";
    std::cin >> num;
    
    
    if (num >= min){
        std::cout << "\n===================== if statement 1 ====================== " << std::endl;
        std::cout << num << " is greater than or equal to " << min << std::endl;
        
        int diff {num - min}; // Declare int variable diff & Initialize it as num - min -> variable inside the block = local scope variable
        std::cout << num << " is " << diff << " greater than " << min << std::endl;
        
    }
    
    if (num <= max){
        std::cout << "\n===================== if statement 2 ====================== " << std::endl;
        std::cout << num << " is less than or equal to " << max << std::endl;
        
        int diff {max - num}; // Declare int variable diff & Initialize it as num - min -> variable inside the block = local scope variable
        std::cout << num << " is " << diff << " less than " << min << std::endl;
        
    }
    
    if (num >= min && num <= max){
        std::cout << "\n===================== if statement 3 ====================== " << std::endl;
        
        std::cout << num << " is between " << min << " and " << max << std::endl;
        std::cout << " This means statements 1 and 2 must also display! " << std::endl;
    }
    
    if (num == min || num == max){
        std::cout << "\n===================== if statement 4 ====================== " << std::endl;
        std::cout << num << " is right on a boundary " << std::endl;
        std::cout << " This means all 4 statements also display! " << std::endl;
    }
    std::cout << std::endl;
    return 0;
}