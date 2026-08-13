// Section 16
// Using Override
#include <iostream>

class Base {
public:
    virtual void say_hello() const{
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
    
    virtual ~Base(){}     
};


class Derived: public Base{
public:
    virtual void say_hello() const override {      // Notice I forgot the const
        std::cout << "Hello - I'm a Derived class object without const keyword" << std::endl;
    }
    
    virtual ~Derived(){}
};



int main(){
    
    Base *p1 = new Base{};          
    p1->say_hello();                // Base::say_hello()
    
    Derived *p2 = new Derived{};
    p2->say_hello();                // Derived::say_hello()
    
    Base *p3 = new Derived{};
    p3->say_hello();                // Base::say_hello() cause compiler consider Derived::say_hello() method is redefinition -> static bind in compile-time.
}