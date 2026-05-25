// Section 14
// Overloading move constructor and move assignment operator
#include <iostream>
#include <vector>
#include <Mystring.h>

using namespace std;

// r-value = temporary object -> move semantics!!! -> use move constructor and move overloaded operator

int main(){
    
    std::cout << boolalpha << std::endl;
    
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    
    Mystring stooge = larry; // Overloaded Constructor
    larry.display();
    moe.display();
    
    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;
    
    larry.display();
    Mystring larry2 = -larry;
    larry2.display();
    
    Mystring stooges = larry + "Moe";
//    Mystring stooges = "Larry" + moe;
    
    Mystring two_stooges = moe + " " + stooge;
    two_stooges.display();
    
    
    return 0;
}