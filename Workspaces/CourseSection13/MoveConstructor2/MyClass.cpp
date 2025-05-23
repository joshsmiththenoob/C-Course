#include "MyClass.hpp" 
#include <string>
#include <iostream>

// implementation of class method = can access any attribute, method in class with class scope resolution
//
//void MyClass::set_x(int x_value){//    x = x_value;
//}

int Move::get_data_value(){
    return *data; //Dereference pointer to get stored value on specified address
};

void Move::set_data_value(int d){
    *data = d;
}

// Constructor: Origin Constructor for initilize object
Move::Move(int d){
    data = new int; // allocate storage on the heap dynamically to pointer of integer
    *data = d; // assign dereference of point of integer a value
    std::cout << "Consructor for: " << d << std::endl;
}


// Copy Constructor: Delegate origin constructor to initalize object by source object 
Move::Move(const Move &source)
    : Move {*source.data}{
        std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
    }
    
    
// Move Constructor: Using tempary object(R-value) to get the same value refered by same address
Move::Move(Move &&source) noexcept
        : data {source.data}{ // Using initializer list to initalize attribute directly 
            std::cout << "Move Constructor - Moving resource: " << *data << " from source data: " << source.data << std::endl;
            source.data = nullptr; // Steal the data from source and null the pointer of the source object out = Move data
        } 



// Destructor Implmentation
Move::~Move(){
    if (data != nullptr){
        // if data (pointer of integer) recorded memory address
        std::cout << "Destructor freeing data for: " << *data << " from address: " << data << std::endl;
    } else{
        std::cout << "Drestructor freeing data for nullptr. This pointer of Integer didn't be specified to point any address!! free pointer!!" << std::endl;
    }
    
    // Free pointer before destruct Object to avoid memory leaking 
    delete data; 
}