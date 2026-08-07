#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <iostream>
#include "Account.h"
// Savings Account "Is A"n Account
//      adds an interest rate
// Withdraw - same as a regular account
// Deposit:
//      Amount supplied to deposit will be incremented by ( amount * int_rate/100)
//      and then the updated amount will be deposited by Amount base class method



class SavingsAccount: public Account
{
    // Overloaded Stream insertion operator by non-member/global friend function: could access any attribute of class
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &account);
private:
    // Only C++11 and above: const expression: constants that are available only to the class -> class variable.
    // -> we can change the const variable's value in one place.
    static constexpr const char *def_name = "Unnamed Savings Account";     // the string 
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    // three-args Constructor
    SavingsAccount(std::string name= def_name, double balance = def_balance, double int_rate = def_int_rate);
//    SavingsAccount(std::string name = "Unnamed Savings Account", double balance = 0.0, double def_int_rate = 0.0);
    // Redefined/Overwrited deposit method
    bool deposit(double amount);
    
    // Inherits the Account::withdraw methods
};

#endif // SAVINGSACCOUNT_H
