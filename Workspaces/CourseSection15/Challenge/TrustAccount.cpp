#include "TrustAccount.h"
#include "Account.h"
#include "SavingsAccount.h"
#include <iostream>
#include <string>

// Overloaded Insertion Operator by non-global friend function of TrustAccount
std::ostream &operator<<(std::ostream &os, const TrustAccount &account){
    // CAN NOT delegate friend function of SavingsAccount because SavingsAccount got its strings
    // But we can still delegate parent's friend fucntion -> Account's friend -> TrustAccount "Is-A" SavingsAccount
    // -> TrustAccount "Is-A" Account as well!!
    os << static_cast<const Account&>(account) 
    // Type any specific message of TrustAccount
    << " [TrustAccount's rate: " << account.int_rate << "%]";
    return os;
}


// 3-Args Constructor
TrustAccount::TrustAccount(std::string name, double balance, double int_rate)
    : SavingsAccount(name, balance, int_rate) // Delegate parent class' constructor method
    {
    }


// deposit method
bool TrustAccount::deposit(double amount){
    if (amount >= 5000.0)
        amount += 50; //any deposits of $5000.0 or more will receive a $50.00 bonus deposited to the account.
    return SavingsAccount::deposit(amount);
}

// withdraw method
bool TrustAccount::withdraw(double amount){
    if (SavingsAccount::withdraw(amount)){
        this->withdrawal_count += 1;
        return true;
    }else
        return false;
}