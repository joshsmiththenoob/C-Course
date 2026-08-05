// Section 15
// Redefining and Using Base Class Methods
#include <iostream>
#include "Account.h"
#include "SavingsAccount.h" // transitive include "Account.h" from "SavingAccount.h" -> No need to include "Account.h" in main.cpp again

using namespace std;

int main() {
    cout << "\n ========================== Account class ==========================" << endl;
    Account a1{1000.0};
    cout << a1 << endl;             // Account balance: 1000
    
    a1.deposit(500.0);
    cout << a1 << endl;             // Account balace: 1500
    
    a1.withdraw(1000);
    cout << a1 << endl;             // Account balance: 500
    
    a1.withdraw(5000);          // Insufficient funds
    cout << a1 << endl;             // Account balance: 500
    
    
    
    cout << "\n ========================== SavingsAccount class ==========================" << endl;
    SavingsAccount s1 {1000, 5.0};
    cout << s1 << endl;             // SavingsAccount balance: 1000 Interest rate: 5.0
    
    
    s1.deposit(1000);
    cout << s1 << endl;             // SavingsAccount balance: 2050 Interest rate: 5.0
    
    
    s1.withdraw(2000);
    cout << s1 << endl;             // SavingsAccount balance: 50 Interest rate: 5.0
    
    s1.withdraw(1000);          // Insufficient funds
    cout << s1 << endl;             // SavingsAccount balance: 50 Interest rate: 5.0
    
    
}