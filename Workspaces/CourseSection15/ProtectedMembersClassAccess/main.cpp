// Section 15
// Constructors and Destructors
#include <iostream>

class Base{
    // Note: friends of Base have access to all public/private/protected members(attributes/methods)
public:
    int a {0};
    void display(){
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
protected:
    int b {1};
private:
    int c {2};
};


// Case1: public access inheritance
class Derived: public Base{
    // Note: friends of Derived have access to only what Derived has access to -> friends function/class CAN NOT access its super class' attributes/members
    
    // a will be public
    // b will be protected
    // c will not be accessible
public:    
    void access_base_members(){
        this->a = 100; //OK
        this->b = 200; // OK
//        this->c = 300; // NOT accessible 
    }

};



int main(){
    
    // Create Base super class 
    std::cout << "======================= Base member access from base objects =======================" << std::endl;
    Base base; // Initialize obj
    base.a = 100;
//    base.b = 200;
//    base.c = 300;
    
    std::cout << "======================= Base member access from derived objects =======================" << std::endl;
    Derived derived;
    derived.a = 100; // public OK
//    derived.b = 200; // protected is NOT accessible by global scope except class which got inheritance relationship itself
//    derived.c = 300; // private is NOT accessible, ONLY class itself or its friend functions got access

    
    return 0;
}