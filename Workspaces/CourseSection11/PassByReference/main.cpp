// Section 11
// Pass-by-reference
// passing the actual parameter by reference and the alias(formal parameter) is actually referring to the actual parameter

#include <iostream>
#include <string>
#include <vector>

// function prototype: get 3 pass by reference functions
// reference: formal variable value = alias of actual variable : got the same value of same address location
void pass_by_ref1(int& num); // expect reference to int
void pass_by_ref2(std::string& s);
void pass_by_ref3(std::vector<std::string>& v);
void print_vector(const std::vector<std::string>& v); // const


// function implmentation (definition)
void pass_by_ref1(int& num){ // will reference to actual variable: formal variable value = alias of actual variable , two variables got same value in the same memory address 
    num = 1000;
}

void pass_by_ref2(std::string& s){
    s = "Changed";
}

void pass_by_ref3(std::vector<std::string> &v){
    v.clear(); // delete all vector elements
}

void print_vector(const std::vector<std::string> &v){
    for (auto s: v) {// because vector is a object, not array, so function can use ranged based for vector of strings
        std::cout << s << std::endl;
    }
}

int main(){
    int num {10};
    int another_num {20};
    
    std::cout << "num before calling pass_by_ref1: " << num << std::endl;
    pass_by_ref1(num);
    std::cout << "num after calling pass_by_ref1: " << num << std::endl;

    std::cout << "num before calling pass_by_ref1: " << another_num << std::endl;
    pass_by_ref1(another_num);
    std::cout << "num after calling pass_by_ref1: " << another_num << std::endl;
    
    
    std::string name {"Frank"};
    std::cout << "\nname before calling pass_by_ref2: " << name << std::endl;
    pass_by_ref2(name);
    std::cout << "  name after calling pass_by_ref2: " << name << std::endl;
    
    
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    std::cout << "stooges after calling pass_by_ref3:";
    print_vector(stooges);
    
    std::cout << std::endl;
    return 0;    
}