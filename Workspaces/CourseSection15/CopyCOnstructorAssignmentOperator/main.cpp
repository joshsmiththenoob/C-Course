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
        
    // Copy Constructor: actually the compiler will create the SAME Copy constructor automatically
    // But if we need to add some custom process -> we need to create our version of Copy constructory explicitly
    Base(const Base &other)
        : value{other.value} // COPY other.value and assign it to this->value
        {
            cout << "Base Copy constructor activated." << endl;
        }
        
    // Overloaded Copy Assignment operator
    Base &operator=(const Base &rhs){
        cout << "Base Overloaded Assignment operator '=' activated." << endl;
        if (this == &rhs){ // Check if two obj got the same memory address -> same obj!!! -> self-assignment
            return *this;
        }
        this->value = rhs.value;
        return *this;
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
        
    // Copy Constructor: actually the compiler will create the SAME Copy constructor automatically
    // But if we need to add some custom process -> we need to create our version of Copy constructory explicitly
    Derived(const Derived& other)
        :Base{other}, doubled_value{other.doubled_value} 
        // Copy constructor of Base expects the Base obj, but Derived "Is-A" Base
        // so we can certainly pass Derived obj into Base's Copy constructor method and let this method take Base part out of Derived obj
        // Slicing the Base part from Derived obj.
        {
            cout << "Derived Copy constructor activated." <<endl;
        }
        
     // Overloaded Copy Assignment operator
    Derived &operator=(const Derived &rhs)
    {
        cout << "Derived Overloaded Assignment operator '=' activated." << endl;
        if (this == &rhs){ // Check if both memory addresses is the same -> same obj!! -> self-assignment
            return *this;
        }
        // Pass Derived obj into overloaded assignment operator of Base part obj in Derived obj
        // Slicing Base part from Derived obj -> cause Base overloaded assignment operator expected Base obj.
        Base::operator=(rhs); // Copy the right-hand side to left-hand side but only the Base part.
        this->doubled_value = rhs.doubled_value;
        return *this;
    }
        
        
    // Destructor
    ~Derived(){
        cout << "Derived destructor activated." <<endl;
    }
};

int main(){
//    Derived d;  
//    Derived d{1000};
//    Base b {100};   //Overloaded one-arg constructor
//    Base b1 {b};    // Copy constructor
//    b = b1;             // Overloaded Copy assignment operator
//    
    Derived d {100};   //Overloaded one-arg constructor
    Derived d1 {d};    // Copy constructor
    d = d1;             // Overloaded Copy assignment operator
    
    
    return 0;
}