// Section 16
// Interfaces -start
# include <iostream>

class Account{
    // declaration -> need to add semicolon ';' at the end of method/friend function
    // friend functions is NOT inherited -> NOT the member of the class.
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
public:
    // Polymorphism: virtual function/method will let compiler find actual obj's method in run-time while use pointer/reference to Base class and declare virtual keyword
    // implementation -> no need to add semicolon ';' at terminal of method/ friend function
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() { }
};

// friend functions CAN NOT implement in class scope -> NOT member of the class. They must be implemented individually -> Best practice is implementing friend functions in specific class' .cpp file
std::ostream &operator<<(std::ostream &os, const Account &acc){
    os << "Account display";
    return os;
}


// Derived class:
class Checking: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount){
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() { }
};

std::ostream &operator<<(std::ostream &os, const Checking &acc){
    os << "Checking display";
    return os;
}


// Derived class:
class Savings: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount){
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { }
};

std::ostream &operator<<(std::ostream &os, const Savings &acc){
    os << "Savings display";
    return os;
}


// Derived class:
class Trust: public Savings{
    friend std::ostream &operator<<(std::ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount){
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { }
};

std::ostream &operator<<(std::ostream &os, const Trust &acc){
    os << "Trust display";
    return os;
}


int main(){
    
    Account *p1 = new Account{}; 
    std::cout << *p1 << std::endl; 
    
    Account *p2 = new Checking{}; // Checking "Is-A" Account
    std::cout << *p2 << std::endl; // but friend function is NOT member of class -> NOT inherited from class hierarchies -> static binding to Base class cause of pointer/reference.
    
    Account a; // no-args constructor
    std::cout << a << std::endl;
    
    Checking c; // no-args constructor
    std::cout << c << std::endl;
    
    Savings s; // no-args constructor
    std::cout << s << std::endl;
    
    Trust t; // no-args constructor
    std::cout << t << std::endl;
    return 0;
}