# include <iostream>


class ClassHandler{
    private:
        int a;
        
    public:
        // constructor declaration
        ClassHandler(int a_value);
        
        int* give_address_of_attribute();
        int give_value_of_attribute();
};
        

// class method implementation/definition

ClassHandler::ClassHandler(int a_value){
    a = a_value;
}

int* ClassHandler::give_address_of_attribute(){
    return &a;
}


int ClassHandler::give_value_of_attribute(){
    return a;
}


int main(){
    
    ClassHandler obj1 {12};
    
    std::cout << &obj1 << std::endl;
    std::cout << obj1.give_address_of_attribute() << std::endl;
    std::cout << obj1.give_value_of_attribute() << std::endl;

    
    
    return 0;
}