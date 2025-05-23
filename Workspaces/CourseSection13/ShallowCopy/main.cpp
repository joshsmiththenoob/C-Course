#include <iostream>



class alignas(8) Shallow{
private:
    // declare varable pointer of integer and initialize it to nullptr to prevent point any memory address
    int* data{nullptr};
    int i;
    int j;
    char c;
    int k;

public:
    // function prototype(declaration) & implementation=
    void set_data_value(int d){
        //  assign dereference pointer of integer as d
        *data = d;
    }
    
    int get_data_value(){
        return *data;
    }
    
    // Constructor: function prototype/declaration
    Shallow(int d);
    // Copy Constructor: function prototype/declaration
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

// method implementation/definition
Shallow::Shallow(int d){
    data = new int; // allocate storage on the heap dynamically to pointer of integer
    *data = d; // assign dereference of point of integer a value
    i = 1;
    j = 2;
    c = 'j';
    k = 3;
}

Shallow::Shallow(const Shallow &source)
    :data {source.data}, i {source.i}// Initialization list could initialize object of attribute directly
    {
        std::cout << "Copy constructor - shallow copy" << std::endl;
}

Shallow::~Shallow(){
    delete data;
    std::cout << "Destructor freeing data pointer(memory on the heap)" << std::endl;
}


void display_shallow(Shallow s){
    /* function- pass by value: formal parameter will be copied by argument(actual parameter) on stack
     *   -> it's gonna call object's copy constructor to do that 
     */ 
     std::cout << s.get_data_value() << std::endl;
}


int main(){
    
    Shallow obj1 {100};
    display_shallow(obj1);
//    std::cout << &obj1 << std::endl;
    
    Shallow obj2 {obj1};
    obj2.set_data_value(10000);
//    std::cout << &obj2 << std::endl;
    
    std::cout << obj1.get_data_value() << std::endl; 
    
    
    std::cout << "------------------Works !------------------" << std::endl;
    
    return 0;
}