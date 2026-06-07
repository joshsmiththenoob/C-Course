// Section 14
// Overloading move constructor and move assignment operator
#include <iostream>
#include <vector>
#include <Mystring.h>

using namespace std;

// r-value = temporary object -> move semantics!!! -> use move constructor and move overloaded operator

int main(){
    
    Mystring larry {"Larry"};
    larry.display();
    
    larry = -larry;
    larry.display();
    
    std::cout << boolalpha << std::endl;
    Mystring moe {"Moe"};
    Mystring stooge = larry;
    
    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;
    
    
//    Mystring stooges = larry + "Moe";
    Mystring stooges = "Larry" + moe;
    stooges.display();
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();
    Mystring three_stooges = moe + " "+ larry+ " " + "Curly";
    three_stooges.display();
    
    
    return 0;
}