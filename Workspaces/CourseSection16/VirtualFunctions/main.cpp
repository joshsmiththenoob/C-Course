// Section 16
// Virtual functions
#include <iostream>
#include <vector>

// This class uses dynamic polymorphism for the withdraw method

class Account{
public:
    virtual void withdraw(){ // Whenever I come at any derived object via a base class pointer/base class reference, it'll be dynamically bound.
        std::cout << "In Account::withdraw; " << this << std::endl;
    }
    
 };
 
 
class SavingsAccount: public Account{
public:
    virtual void withdraw(){
        std::cout << "In SavingsAccount::withdraw; " << this << std::endl;
    }
    
 };
 
 
class CheckingAccount: public Account{
public:
    virtual void withdraw(){
        std::cout << "In CheckingAccount::withdraw; " << this << std::endl;
    }
    
};
 
 
class TrustAccount: public SavingsAccount{
public:
   virtual void withdraw(){
        std::cout << "In TrustAccount::withdraw; " << this << std::endl;
    }
    
 };
 
 
 
 int main(){
     std::cout << "\n ========= Pointers =========" << std::endl;
     Account *p1 = new Account();
     Account *p2 = new SavingsAccount();
     Account *p3 = new CheckingAccount();
     Account *p4 = new TrustAccount();
     
     p1->withdraw();
     p2->withdraw();
     p3->withdraw();
     p4->withdraw();

     std::cout << "\n ========= Array =========" << std::endl;
    Account *array [] = {p1, p2, p3, p4};
    for (auto i = 0; i < 4; ++i)
        array[i]->withdraw();
     
    std::cout << "\n ========= Array =========" << std::endl;
    array[0] = p4; // Assign the first element value by pointer of TrustAccount (TrustAccount "Is-A" Account)
     for (auto i = 0; i < 4; ++i)
        array[i]->withdraw(); 
     
    std::cout << "\n ========= Vector =========" << std::endl;
    // Initialize the vector (dynamic array) of pointers of Account on the stack(NOT heap -> !!! No need to de-allocate !!!)
    std::vector<Account *> accounts {p1, p2, p3, p4};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw();
        
   // Add pointers and put them into vector
    std::cout << "\n ========= Vector =========" << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    accounts.push_back(p2);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw();

    std::cout << "\n ========= Clean up  =========" << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
     return 0;
 }