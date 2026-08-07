#inculde <iostream>
#include "AccountUtil.h"


// Utility helper functions for Account class

// Display Account objects in a vector of Account objects
void display(const  std::vector<Account> &accounts){
    std::cout << "\n ================== Accounts ==================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount){
     std::cout << "\n ================== Depositing to Accounts  ==================" << std::endl;
     for (auto &acc: accounts){
         if (acc.deposit(amount))
             std::cout << "Deposited" << ammount << " to " << acc << std::endl;
        else 
             std::cout << "Failed Deposit of " << ammount << " to " << acc << std::endl;
     }
}

// Withdraw amount fomr each Account object in the vector (the vector of Accounts)
void withdraw(std::vector<Account> &accounts, double amount){
    std::cout <<  "\n ================== Withdrawing from Accounts  ==================" << std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Utility helper functions for Savings Account class
// Overloaded functions
void display(const  std::vector<SavingsAccount> &accounts){
    std::cout << "\n ================== SavingsAccounts ==================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}
void deposit(std::vector<SavingsAccount> &accounts, double amount){
    std::cout << "\n ================== Depositing to Savings Accounts  ==================" << std::endl;
     for (auto &acc: accounts){
         if (acc.deposit(amount))
             std::cout << "Deposited" << ammount << " to " << acc << std::endl;
        else 
             std::cout << "Failed Deposit of " << ammount << " to " << acc << std::endl;
}


void withdraw(std::vector<SavingsAccount> &accounts, double amount){
    std::cout <<  "\n ================== Withdrawing from Accounts  ==================" << std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
}