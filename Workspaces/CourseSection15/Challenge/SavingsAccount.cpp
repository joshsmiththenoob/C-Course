#include <iostream>
#include "SavingsAccount.h"

using namespace std;

// Savings Account "Is A"n Account
//      adds an interest rate

// 3-args Constructors
SavingsAccount::SavingsAccount(std::string name, double balance, double int_rate)
    : Account{name, balance}, int_rate{int_rate} {
        
    }


std::ostream &operator<<(std::ostream &os, const SavingsAccount &account){
//    os << static_cast<const Account&>(account)
    os << static_cast<const Account&>(account) << " [SavingsAccount's rate: " << account.int_rate << "%]";
    return os;
}

// Deposit:
//      Amount supplied to deposit will be incremented by ( amount * int_rate/100)
//      and then the updated amount will be deposited by Amount base class method

bool SavingsAccount::deposit(double amount){
    amount += (amount * (this->int_rate) / 100);
    return Account::deposit(amount);
}

// Withdraw - same as a regular account