#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
    
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;
    
    std::cout << "Enter the third stooge's first name: ";
    // Stream Extraction operator overloaded by non-member function
    std::cin >> curly;
    
    // Stream Inserion operator overloaded by non-member function
    std::cout << "The three stooges are " << larry << ", " << moe << ". amd " << curly << std::endl;
    
    std::cout << "\nEnter the three stooges names separated by a space: ";
    std::cin >> larry >> moe >> curly;
    
    std::cout << "The three stooges are " << larry << ", " << moe << ". amd " << curly << std::endl;
    
    
    
    
    
    return 0;
}