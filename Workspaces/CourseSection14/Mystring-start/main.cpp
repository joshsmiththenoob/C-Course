// Section 14
// Mystring - starting point
#include <iostream>
#include "Mystring.h"


using namespace std;


int main(){
    Mystring empty;                     // no-args constructor
    Mystring larry("Larry");        // overloaded constructor
    Mystring stooge {larry};        // copy constructor
    
    
    empty.display();
    larry.display();
    stooge.display();
    
    
    // Create a arry of characters
    char chr_array [5]  {'A', 'J', 'A', 'X', '\0'};
    
    std::cout << chr_array << std::endl; // == std::cout << &char_array[0] << std::endl;
    std::cout << &chr_array << std::endl;
    std::cout << &chr_array[0] << std::endl;
    
    
    
    
    return 0;
}