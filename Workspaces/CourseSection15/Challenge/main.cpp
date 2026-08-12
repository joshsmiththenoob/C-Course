#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h" // transitive include "Account.h" from "SavingAccount.h" -> No need to include "Account.h" in main.cpp again
#include "CheckingAccount.h"
#include "TrustAccount.h"
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
    
    
    // CheckingsAccount
    vector<CheckingAccount> check_accounts;
    check_accounts.push_back(CheckingAccount {});
    check_accounts.push_back(CheckingAccount {"Bandit"});
    check_accounts.push_back(CheckingAccount {"Jackal", 3000});
    check_accounts.push_back(CheckingAccount {"Hibana", 6000});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    
    // Trust Account
    vector<TrustAccount> t_accounts;
    t_accounts.push_back(TrustAccount {});
    t_accounts.push_back(TrustAccount {"Josh", 10000, 5.0});
    t_accounts.push_back(TrustAccount {"Ping", 2000, 4.0});
    t_accounts.push_back(TrustAccount {"NightTrain", 30000, 10.0});

    display(t_accounts);
    deposit(t_accounts, 1000);
    withdraw(t_accounts, 2000);
    
    // withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals of if withdrawl is > 20% of the balance
    for (int i = 0; i < 5; i++)
        withdraw(t_accounts, 1000);
    
    
    return 0;
    
}