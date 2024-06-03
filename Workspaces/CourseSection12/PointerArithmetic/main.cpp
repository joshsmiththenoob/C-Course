// Section 12
// Pointer Arithmetic
#include <iostream>
#include <string>

int main(){
    
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores}; // because of value of array variable is address, so pointer could stored value of array variable directly to accress memeory address of array
    
    while (*score_ptr != -1){ // find the value of dereference of pointer pointing to array
        std::cout << "\naddress of chunk of address(array) is: " << score_ptr << std::endl;
        std::cout << "deference value of chunk of address(array) is: " << *score_ptr<< std::endl;
        score_ptr++;// new_address = origin_address + n * (sizeof(data type of ptr))
    }
    
    
    std::cout << "\n -------------------------------------" << std::endl;
    score_ptr = scores;
    while (*score_ptr != -1){
        std::cout << *score_ptr++ << std::endl; // both perator * and ++ have the same precedence -> look at the associativity -> associativty: right to left -> ++ first and * is the last
        // associativity: right to left -> first: ++ (address increment with data type of pointer), 2nd: * (deferencing) 
    }
    
    
    std::cout << "\n -------------------------------------" << std::endl;
    std::string s1 {"Frank"};
    std::string s2 {"Frank"};
    std::string s3 {"James"};
    
    std::string *p1 {&s1};
    std::string *p2 {&s2};
    std::string *p3 {&s1};
    
    std::cout << std::boolalpha; // Display True/False instead of 1/0
    
    std::cout << p1 << " == " << p2 << ": " << (p1 == p2) << std::endl;
    std::cout << p1 << " == " << p3 << ": " << (p1 == p3) << std::endl;
    
    std::cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << std::endl;
    std::cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << std::endl;
    
    p3 = &s3; // Point to James
    std::cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << std::endl;
    
    std::cout << "\n -------------------------------------" << std::endl;
    
    char name[] {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    std::cout << name << std::endl; // Note that exception of array was char array variable (will not represent the memory address of the first element)
    std::cout << &name << std::endl;
    std::cout << &name[3] << std::endl;
    char_ptr1 = &name[0]; //So if we use pointer to point char array, we still need address operation
    char_ptr2 = &name[3];
    std::cout << char_ptr1 << std::endl;
    std::cout << char_ptr2 << std::endl;
    
    std::cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << std::endl;
    std::cout << std::endl;
    
    return 0;
}