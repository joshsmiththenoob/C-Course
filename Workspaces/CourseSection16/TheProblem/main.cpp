// Section 16
// The problem
#include <iostream> 
#include <memory>

class Base{
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};


class Derived: public Base{
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};


void greetings(const Base &obj){ // Expect Base obj by reference: remember Derived "Is-A" Base; But in static binding: the Derived obj will be sliced and take the Base part of it to execute Base's method
    std::cout << "Greetings: ";
    obj.say_hello();  // compiler always binds Base::sayhello() cause compiler always see the reference to Base obj statically in compiler time while we don't specify virtual function to change compiler's perspective in run time. 
}



int main(){
    //  there's no pointers and no virtual methods -> everything is static.
    
    Base b {};
    b.say_hello();
    
    Derived d {};
    d.say_hello();
    
    greetings(b);
    greetings(d);
    
    Base* ptr {nullptr};
    ptr = new Derived(); // The pointer of Base: ptr can hold the address of any Base obj. Event Derived "Is-A" Base, it stll can hold the address of Base part of Derived obj.
    
    ptr->say_hello(); // Compiler see ptr is pointer of Base -> Only binding this method to Base::say_hello() statically in compile-time.
    
    
    // Smart pointer: even the smart pointer, compiler see ptr1 is smart pointer of Base -> still only binding Base::method in compile-time.
    std::unique_ptr<Base> ptr1 {nullptr};
    ptr1 = std::make_unique<Derived>(); // Instantiate Derived obj
    ptr1->say_hello();
    
    
    // Free Pointer: just need to free raw pointer; Smart pointers will take care of themeselves.
    delete ptr; 
    
    
    return 0;
}