// Section 15
// Constructors and Destructors 
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
        : doubled_value{0}
        {
            cout << "Derived no-args constructor activated." << endl;
        }
     // One-arg overloaded constructor
    Derived(int x)
        : doubled_value{x*2}
        {
            cout << "Derived one-arg (int) overloaded constructor activated." <<endl;
        }
        
    // Destructor
    ~Derived(){
        cout << "Derived destructor activated." <<endl;
    }
};

int main(){
//    Base b;
//    Base b{100};

//    Derived d;  // Default constructor called while there's no constructor provided -> because of not setting value to doubled_value variable of Derived class from default constructor -> doubled_value got garbage data.
    Derived d{1000};
    
    return 0;
}