#include "Account.h"
// Simplae Account class

Account::Account()
    : Account{0.0} { // delegating overloaded One-arg Construcdtor in Initialization list        
    }
    
Account::Account(double balance)
    : balance{balance}{ // Initialize attributes in Initialization list before constrcutor method body
}

void Account::deposit(double amount){
    this->balance += amount;
}

void Account::withdraw(double amount){
    if (balance - amount >= 0)
        this->balance -= amount; // Subtract the amount from balance.
    else
        std::cout << "Insufficient funds" << std::endl;
}

// we can use default destructor provided by compiler

// Overloaded Stream Insertion operator by non-member functions. but it's friend function, we cna access any atribute from the class directly
std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "Account balance: " << account.balance;
    return os;
}