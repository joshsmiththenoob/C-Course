#include <iostream>

void double_data(int *int_ptr){
    *int_ptr *= 2;
}

int main(){
    int value {10};
    int *int_ptr {nullptr};
    
    std::cout << "Value: " << value << std::endl;
    double_data(&value); //pass address of value to double_data function so that function and copy address of value and assign it to local function variable int_ptr
    std::cout << "Value: " << value << std::endl;
    
    
    std::cout << " --------------------------------------------" << std::endl;
    int_ptr = &value;
    double_data(int_ptr);
    std::cout << "Value: " << *int_ptr << std::endl;
    
    
    
    std::cout << "Works! "<< std::endl;
    return 0;
}