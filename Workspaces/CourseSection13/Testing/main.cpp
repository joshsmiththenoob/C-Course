# include <iostream>


class ClassHandler{
    private:
        int a;
        
    public:
        // constructor declaration
        ClassHandler(int &&a_value);
        
        int* give_address_of_attribute();
        int give_value_of_attribute();
        const int return_const_value();
};
        

// class method implementation/definition

ClassHandler::ClassHandler(int &&a_value)
    : a {a_value}{
}

int* ClassHandler::give_address_of_attribute(){
    return &a;
}


int ClassHandler::give_value_of_attribute(){
    return a;
}


const int ClassHandler::return_const_value(){
    return a;
}

int main(){
    
    ClassHandler obj1 {12};
    
    std::cout << &obj1 << std::endl;
    std::cout << obj1.give_address_of_attribute() << std::endl;
    std::cout << obj1.give_value_of_attribute() << std::endl;

    int b {obj1.return_const_value()};
    std::cout << obj1.give_address_of_attribute() << std::endl;
    
    std::cout << "Before Modified"<< std::endl;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;
    b = 309;
    std::cout << "After Modified"<< std::endl;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;

    
    // Test L-value reference & R-value reference
    std::cout << "----------------------------------------------------" << std::endl;
    int x {100};
    int &y {x};
    int &&z {200};
    
    std::cout << &x << std::endl;
    std::cout << &y << std::endl;
    std::cout << &z << std::endl;

    
    return 0;
    
}