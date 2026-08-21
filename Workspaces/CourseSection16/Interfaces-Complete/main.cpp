// Section 16
// Interfaces - complete
# include <iostream>

class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &p);
public:
    // declare pure virtual functions/methods that the Derived class needs to implement if they want to be concrete class
    virtual void print(std::ostream &os) const = 0; // const at the end: the method/functions promise they didn't modify any member of the obj.
};

std::ostream &operator<<(std::ostream &os, const I_Printable &p){ 
    p.print(os); // Coming at it with Base class reference -> use its method -> use dynamic polymorphism binding to actual obj data type's method
    return os; // Overloaded stream insertion operator need to return ostream -> So that we can us stream chainging : ex: operator<<(std::cout, account)<< " Hello"<< 100<< std::endl;
}

 
class Account: public I_Printable{
public:
    // Polymorphism: virtual function/method will let compiler find actual obj's method in run-time while use pointer/reference to Base class and declare virtual keyword
    // implementation -> no need to add semicolon ';' at terminal of method/ friend function
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &os) const override { 
    // dynamic polymorphism preresquisite: must EXACTLY match the signature and return type of base class' method 
    // -> if it cannot match -> override keyword helps us to mention compiler to bring us error message.
        os << "Account display";
    }
    virtual ~Account() { }
};


// Derived class:
class Checking: public Account{
public:
    virtual void withdraw(double amount){
        std::cout << "In Checking::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &os) const override { 
    // dynamic polymorphism preresquisite: must EXACTLY match the signature and return type of base class' method 
    // -> if it cannot match -> override keyword helps us to mention compiler to bring us error message.
        os << "Checking display";
    }
    virtual ~Checking() { }
};

// Derived class:
class Savings: public Account{
public:
    virtual void withdraw(double amount){
        std::cout << "In Savings::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &os) const override { 
    // dynamic polymorphism preresquisite: must EXACTLY match the signature and return type of base class' method 
    // -> if it cannot match -> override keyword helps us to mention compiler to bring us error message.
        os << "Savings display";
    }
    
    
    virtual ~Savings() { }
};


// Derived class:
class Trust: public Savings{
public:
    virtual void withdraw(double amount){
        std::cout << "In Trust::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &os) const override { 
    // dynamic polymorphism preresquisite: must EXACTLY match the signature and return type of base class' method 
    // -> if it cannot match -> override keyword helps us to mention compiler to bring us error message.
        os << "Trust display";
    }
    

    virtual ~Trust() { }
};


class Dog: public I_Printable{
public:
    virtual void print(std::ostream &os) const override { 
    // dynamic polymorphism preresquisite: must EXACTLY match the signature and return type of base class' method 
    // -> if it cannot match -> override keyword helps us to mention compiler to bring us error message.
        os << "Woof Woof!!!";
    }
};


void print(const I_Printable &obj){
    std::cout << obj << std::endl;
}

int main(){
    
    Account *p1 = new Account{}; 
    std::cout << *p1 << std::endl; 
    
    Account *p2 = new Checking{}; // Checking "Is-A" Account
    std::cout << *p2 << std::endl; // but friend function is NOT member of class -> NOT inherited from class hierarchies -> static binding to Base class cause of pointer/reference.
    
    
    // What if we create Dog object?
    Dog *dog = new Dog{};
    std::cout << *dog << std::endl;
    
    
    print(*dog);
    // Absolutely works below cause it's statically binding thoughout
//    Account a; // no-args constructor
//    std::cout << a << std::endl;
//    
//    Checking c; // no-args constructor
//    std::cout << c << std::endl;
//    
//    Savings s; // no-args constructor
//    std::cout << s << std::endl;
//    
//    Trust t; // no-args constructor
//    std::cout << t << std::endl;
    return 0;
}