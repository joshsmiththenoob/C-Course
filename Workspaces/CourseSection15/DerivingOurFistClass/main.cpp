# include <iostream>
# include "Account.h"
# include "SavingsAccount.h"

using namespace std;

int main(){
    
    // Initialize Account Base Class
    cout << "\n ==================== Account ====================" << endl;
    Account acc{}; // Initialize(Instantiate) with no-args Constructor
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    
    cout << endl;
    
    // Initialize the pointer of Account Base Class(custom data type)
   // Initialize pointer of Account with null pointer first
   Account *p_acc {nullptr};
   // Then assign the pointer with the address of new Account obj on the Heap
   p_acc = new Account{};
    // Using arrow to get deference of the pointer then use its attribute/methods: just like "this" is the pointer of the class in class scope
    p_acc->deposit(1000.0);
    p_acc->withdraw(200.0);
    
    // Don't forget to de-allocate the memory we use from the pointer on the heap
    delete p_acc;
    
    
    // Then initialize the sub-class SavingsAccount which inherite the super(parent) class Account 
    cout << "\n ==================== SavingsAccount  ====================" << endl;
    SavingsAccount sav_acc{}; // Initialize SavingsAccount with no-args constructor
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    
    cout << endl;
    
    // Initialize pointer of SavingsAccount with null pointer first
    SavingsAccount *p_sav_acc {nullptr};
    // Then assign the pointer with the address of new SavingsAccount obj on the Heap
    p_sav_acc = new SavingsAccount{};
   // Using arrow sign as we do this pointer in class scope of the class. 
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(470.0);
    delete p_sav_acc;
    
    cout << "\n ========================================================" << endl;
    
    return 0;
    
}