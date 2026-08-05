#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    // Overloaded
    friend std::ostream &operator<<(std::ostream &os, const Account &account); // friend functions could access any attribute in the class directly. 
protected:
    double balance;
    
public:
    Account(); // No-args Constructor
    Account(double balance); // Overloaded One-arg Constructor
    void deposit(double amount);
    void withdraw(double amount);
    
     // we can use default destructor provided by compiler


};

#endif // ACCOUNT_H
