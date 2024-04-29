// Section 9
// if-else Statement: Compare num to the target

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
    int num {}; // Declare int varable "num" & Initialize num as 0
    const int target {10};
    
    std::cout << "Enter a number and I'll compare it to " << target << ": ";
    std::cin >> num;
    
    if (num >= target){
        std::cout << "\n==============================================" << std::endl;
        std::cout << num << " is greater than or equal to " << target << std::endl;
        int diff {num - target}; // Declare local scope variable "diff" which is avaliable in "if block statement"
        std::cout << num << " is " << diff << " greater than " << target << std::endl;
    }else{
        std::cout << "\n==============================================" << std::endl;
        std::cout << num << " is less than " << target << std::endl;
        int diff {target - num}; 
        std::cout << num << " is " << diff << " less than " << target << std::endl;
    }
    
    return 0; 
}