#include <iostream>
#include <vector>
#include "MyClass.hpp"



int main(){
    // Initialize the vector (dynamic array) of Move Object
    std::vector <Move> vec;
    
    // vector(list) appended by temporary object (R-value) instead of variable (L-value)
    vec.push_back(Move(10));
    
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));
    
    
    
    
    return 0;
}