// Section 12
// Derefencing a pointer = Access the value stored by variable(memory address) the pointer point to 

#include <iostream>
#include <string>
#include <vector>

int main(){
    int score {100};
    int *score_ptr{&score};
    
    std::cout << "Address the pointer point to: " << score_ptr << std::endl;
    std::cout << "deferencing the pointer -> Access the value stored by variable(memory address) the pointer point to: " << *score_ptr << std::endl;
    
    *score_ptr = 200; // change the value of deferencing  = change the value of variable the pointer pointing to
    
    std::cout << *score_ptr << std::endl;
    std::cout << score << std::endl; // score will be changed also because it's pointed by pointer and pointer dereferencing change its value
    
        
    std::cout << "\n-----------------------------------------" << std::endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    
    std::cout << *temp_ptr << std::endl;
    temp_ptr = &low_temp; // change where the pointer point to 
    std::cout << *temp_ptr << std::endl;
    
    
    
    std::cout << "\n-----------------------------------------" << std::endl;
    
    std::string name {"Frank"};
    std::string *string_ptr {&name}; // pointer point to string object 
    
    std::cout << *string_ptr << std::endl; // dereferencing the pointer 
    name = "James";
    std::cout << *string_ptr << std::endl;
    
    
    std::cout << "\n-----------------------------------------" << std::endl;
    
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::vector<std::string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges; // point to the address of stooges
    
    std::cout << "First stooges: " << (*vector_ptr)[0] << std::endl; // note: important that you put thoses parethesis around pointer because compiler will misunderstood it to vector at [0] is a pointer which need to be derferenced
    
    std::cout << "Stooges: ";
    for (auto i : *vector_ptr) // deferencing the vector  pointer and use ranged-based for loop to get value of variable pointed by pointer 
        std::cout << i << " ";
    std::cout << std::endl; 
    
    
    
    
    std::cout << std::endl;
    return 0;
}