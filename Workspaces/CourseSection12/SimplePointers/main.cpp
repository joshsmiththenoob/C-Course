// Section 12
// Simple pointers

#include <iostream>
#include <vector>
#include <string>

int main(){
    int num {10};
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Size of num: " << sizeof(num) << " bytes"<<std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    
    int *p ; // if pointer p is uninitialized, then p will get garbage address
    
    std::cout << "The value of pointer (the pointer point) is: " << p << std::endl;
    std::cout << "The address of pointer itself is: " << &p << std::endl;
    std::cout << "Size of pointer is: " << sizeof(p) << " bytes" << std::endl;
//    std::cout << *p << std::endl;
    std::cout << std::endl;
    
    p = nullptr; // let pointer read the address of variable
    std::cout << "The value of pointer (the pointer point) is: " << p << std::endl;
    
    // Pointer variable stored memory address value(hexdecimal number), so sizes of pointer are all same despite of different type of pointers
    // All pointers in a program have the same size
    // They may be pointing to very large or very small types
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long  *p3 {nullptr};
    std::vector<std::string> *p4 {nullptr};
    std::string *p5 {nullptr};
    std::cout << "Size of pointer is: " << sizeof p1 << std::endl;
    std::cout << "Size of pointer is: " << sizeof p2  << std::endl;
    std::cout << "Size of pointer is: " << sizeof p3 << std::endl;
    std::cout << "Size of pointer is: " << sizeof p4 << std::endl;
    std::cout << "Size of pointer is: " << sizeof p5 << std::endl;
    
    
    //

    int score {10};
    double high_temp{100.7};
    
    int *score_ptr {nullptr};
    
    score_ptr = &score;
    std::cout << "Value of score is: " << score << std::endl;
    std::cout << "Address of score is: " << &score << std::endl;
    std::cout << "Value of score_ptr is: " << score_ptr << std::endl;
    
//    score_ptr = &high_temp; // Compiler error (because pointer of int hold address of wrong variable type(double))
    
    
    
    return 0;
}