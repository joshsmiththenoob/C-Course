#include <iostream>
#include <string>
#include <vector>


int main(){
    
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::vector<std::string> *vec_ptr {&stooges};
    std::string *vec_ptr1 {&stooges[0]};
    std::string *vec_ptr2 {&stooges[1]};
    std::string *vec_ptr3 {&stooges[2]};
    
    std::cout << "\n-----------Original address --------------------" << std::endl;
    std::cout << &stooges << std::endl;
    std::cout << &(stooges[0]) << std::endl;
    std::cout << &(stooges[1]) << std::endl;
    std::cout << &(stooges[2]) << std::endl;
    
    
    std::cout << "\n-----------address the pointer pointing to --------------------" << std::endl;
    std::cout << vec_ptr << std::endl;
    std::cout << vec_ptr1 << std::endl;
    std::cout << vec_ptr2 << std::endl;
    std::cout << vec_ptr3 << std::endl;
    
    
    
    std::cout << "\n-------------- address of copied string in range-based for loop -------------------" << std::endl; 
        
    for (auto str: stooges){
        // every element will be copied and allocate a new memory address binding to variable str
        str = "Funny"; // in for-loop scope, the element will be copyed in for loop -> so we set the copy to Funny
        std::cout << &str << std::endl;
    }
    
    for (auto str: stooges){
        std::cout << str << std::endl;
        std::cout << &str << std::endl;
    }
    
    std::cout << "\n------------------ we rather use references in range-base for loop : will change the actual element of vector --------------------" << std::endl;
    for (auto &str: stooges){
        // the variable str is the alias of every element in vector! -> Will change the actual elemnt! -> efficient code without new memory allocated for copy any elements 
        str = "Funny";
        std::cout << &str << std::endl;
    }
    
    for (auto const &str: stooges){
        // Can use const qualifier to refernce str so that we can't modify the str = alias of every element in vector
        std::cout << str << std::endl;
        std::cout << &str << std::endl;
    }
    
    std::cout << "\n -----------------------Works-----------------------" << std::endl;
    
    return 0;
}