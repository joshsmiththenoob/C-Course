#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"

// Utility helper functions for Account class

void display(const  std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class
// Overloaded functions
void display(const  std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

#endif