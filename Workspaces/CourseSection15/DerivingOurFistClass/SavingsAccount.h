#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "Account.h"

// SavingsAccount inheritnace Account base class 
class SavingsAccount: public Account
{
public:
    double int_rate;
    
    SavingsAccount();
    ~SavingsAccount();
    void deposit(double amount);
    void withdraw(double amount);

};

#endif // SAVINGACCOUNT_H
