#include <iostream>
#include <vector>
#include <string>

int main(){
    int num {10};
    std::cout << "Size of num: " << sizeof(num) << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    
    int *p {nullptr}; // if pointer p is uninitialized, then p will get garbage data
    p = &num; // let pointer read the address of variable
    
    std::cout << "The value of pointer (the pointer point) is: " << p << std::endl;
    std::cout << "The address of pointer itself is: " << &p << std::endl;
    std::cout << "Size of pointer is: " << sizeof(p) << std::endl;
    std::cout << *p << std::endl;
    std::cout << std::endl;
    
//    // Pointer variable stored memory address value(hexdecimal number), so sizes of pointer are all same despite of different type of pointers
//    // All pointers in a program have the same size
//    // They may be pointing to very large or very small types
//    
//    int *p1 {nullptr};
//    double *p2 {nullptr};
//    unsigned long long  *p3 {nullptr};
//    std::vector<std::string> *p4 {nullptr};
//    std::string *p5 {nullptr};
//    std::cout << "Size of pointer is: " << sizeof(p1) << std::endl;
//    std::cout << "Size of pointer is: " << sizeof(p2) << std::endl;
//    std::cout << "Size of pointer is: " << sizeof(p3) << std::endl;
//    std::cout << "Size of pointer is: " << sizeof(p4) << std::endl;
//    std::cout << "Size of pointer is: " << sizeof(p5) << std::endl;
    
    
    return 0;
}