// Section 12
// Return Pointer
// Note: !! Don't return the pointer that point to the function local variable -> because local variable will be disappear after function call

#include <iostream>

// function prototype
int *create_array(std::size_t size, int init_value = 0); // the function return pointer(address) almost use on returning dynamically allocated address 
void display(const int *const array, std::size_t size); 


// function implementation(definition)
int *create_array(std::size_t size, int init_value){
    int *new_storage {nullptr};
    new_storage = new int [size];
    
    for (size_t i{0} ; i < size ; i++){
        new_storage[i] = init_value;
    }
    
    return new_storage;
}

void display(const int *const array, std::size_t size){
    for (std::size_t i {0}; i < size; i++){
        std::cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
}


//void display(const int * array, std::size_t size){
//    for (std::size_t i {0}; i < size; i++){
//        std::cout << *array++ << " ";
//        if ((i + 1) % 10 == 0)
//            std::cout << std::endl;
//    }
//    std::cout << std::endl;
//}




int main(){
    int *my_array {nullptr};
    std::size_t size {0};
    int init_value {0};
    
    
    std::cout << "\nHow many integers do you like to allocate? ";
    std::cin >> size;
    std::cout << "What value do you like them initialized to? ";
    std::cin >> init_value;
    
    my_array = create_array(size, init_value);
        
    std::cout << "\n--------------------------------------------" << std::endl;
    display(my_array, size);
    
    delete [] my_array; // !!Remember to deleter the allocated memory we use in the heap (dynamic memory)
    
    std::cout << "The pointer allocated dynamic location is deleted..." << std::endl;

    
    
    
    
    
    
    
    std::cout << std::endl;
    return 0;
}