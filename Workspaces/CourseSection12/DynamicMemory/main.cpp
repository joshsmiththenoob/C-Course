// Section 12
// Dynamic Memory
#include <iostream>


int main(){
    
    int *int_ptr {nullptr};
    int_ptr = new int;  // the storage of integer is gonna allocated on the heap and its address will stored in int pointer
    std::cout << int_ptr << std::endl;
    std::cout << *int_ptr << std::endl;
    delete int_ptr; // frees up the storage
    
    // create a whole contiguous block of memory (array) on the heap
    int size {0};
    double *array_ptr {nullptr};
    
    std::cout << "How many double datas do you need?: " ;
    std::cin >> size;
    array_ptr = new double [size]; // allocated the cunk of double (array) on the heap, and stored the address of the first element into pointer
    
    std::cout << "The dynamic allocated address by pointer is: " << array_ptr << std::endl;
    std::cout << "The value of dynamic allocated address pointed by pointer is: " << array_ptr[2] << std::endl;
    
    double ex []{1.2, 2.3};
    std::cout << ex << std::endl;
    std::cout << ex[0] << std::endl;
    std::cout << *ex << std::endl;
    
    delete [] array_ptr ;
    std::cout << std::endl;
    return 0;
    
}