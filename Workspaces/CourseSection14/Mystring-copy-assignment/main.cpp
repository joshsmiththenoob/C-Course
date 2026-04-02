// Section 14
// Mystring - starting point
#include <iostream>
#include "Mystring.h"


using namespace std;


int main(){
    Mystring a {"Hello"};
    Mystring b ;
    b = a;                          // Copy assignment
    b.display();
    
    b = "This is a test";   // Assignment 
    b.display();
    
    
    return 0;
}