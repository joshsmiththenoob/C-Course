#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
    : int_rate{3.0} // Using Initialize list to initialize multiple attributes
{
}

SavingsAccount::~SavingsAccount()
{
}


void SavingsAccount::deposit(double amount){
    std::cout << "Saving Account deposit called with " << amount << std::endl;
}


void SavingsAccount::withdraw(double amount){
    std::cout << "Saving Account withdraw called with " << amount << std::endl;
}
