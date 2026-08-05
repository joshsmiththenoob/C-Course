#include "SavingsAccount.h"


// No-args Constructor
SavingsAccount::SavingsAccount()
    : SavingsAccount{0.0, 0.0} // delegate Overloaded one-arg constructor
{
}

// One-arg Overloaded constructor
SavingsAccount::SavingsAccount(double balance, double int_rate)
    : Account{balance}, int_rate{int_rate} {
        
}

// Deposit method increments amount to be deposited by (amount * int_rate) percentage!!
// So a 1000 deposit at 5% interest rate will deposit 1000 + 50  = 1050 
void SavingsAccount::deposit(double amount){
    amount += (amount * int_rate/100) ;
    Account::deposit(amount);
}


 // we can use default destructor provided by compiler

// friend function of SavingsAccount: Overloaded Stream Insertion operator <<
// it retuns a reference to an ostream -> return by reference
std::ostream& operator<<(std::ostream &os, const SavingsAccount &account) {
//    os << "SavingsAccount balance: " << account.balance << " Interest rate: " << account.int_rate;

    // We can delegate the overloaded insertion operator of Account by non-member function when we convert the datatype into Account  
    os << static_cast<const Account&>(account) << " Interest rate: " << account.int_rate;
    return os;
}