// Section 14
// Overloading move constructor and move assignment operator
#include <iostream>
#include <vector>
#include <Mystring.h>

using namespace std;

// r-value = temporary object -> move semantics!!! -> use move constructor and move overloaded operator

int main(){
    
    Mystring a{"Hello"};        // Overloaded constructor
    a = Mystring{"Hola"};       // Overloaded constructor then move assignment  -> no name(variable name) value == r -value -> Move Semantics !!!
    a = "Bonjour";                  // Overloaded constructor then move assignment
    
    
    
    
    return 0;
}