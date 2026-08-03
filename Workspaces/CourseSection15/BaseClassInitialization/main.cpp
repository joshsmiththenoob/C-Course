// Section 15
// Base Class Initialization
# include <iostream>
using namespace std;

// declaration + implementation class
class Base{
private:
    int value;
public:
    // No-args constructor
    Base()
        : value{0} //Initialization list to Initialize data members before constructor body 
        {
            cout << "Base no-args constructor activated." << endl;
        }
    // One-arg overloaded constructor
    Base(int x)
        : value{x}
        {
            cout << "Base one-arg (int) overloaded constructor activated." << endl;
        }
        
    // Destructor
    ~Base(){
        cout << "Base desctructor activated." << endl;
    }
};
 

class Derived: public Base{
//    using Base::Base;  //It allow us to inherit the non-special constructor in Base class; Special constructors: 1. default constructor by compiler 2. Copy constructor etc.
private:
    int doubled_value;
public:
    // No-args constructor
    Derived()
        : Base{}, doubled_value{0} // Call Base class initializer(constructor) explicitly by Derived class
        {
            cout << "Derived no-args constructor activated." << endl;
        }
     // One-arg overloaded constructor
    Derived(int x)
        : Base{x}, doubled_value{x*2}  // Call Base class initializer(constructor) explicitly by Derived class
        {
            cout << "Derived one-arg (int) overloaded constructor activated." <<endl;
        }
        
    // Destructor
    ~Derived(){
        cout << "Derived destructor activated." <<endl;
    }
};

int main(){
//    Derived d;  
    Derived d{1000};
    
    return 0;
}