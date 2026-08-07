#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h" // transitive include "Account.h" from "SavingAccount.h" -> No need to include "Account.h" in main.cpp again
#include "AccountUtil.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
    
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // SavingsAccounts
    vector<SavingsAccount> sav_accounts;
    sav_accounts.push_back(SavingsAccount {});
    sav_accounts.push_back(SavingsAccount {"Superman"});
    sav_accounts.push_back(SavingsAccount {"Batman", 2000});
    sav_accounts.push_back(SavingsAccount {"Wonderwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    
    return 0;
    
}