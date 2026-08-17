// Section 16
// Using Base class pointers
#include <iostream>
#include <vector>

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next course
class Account{
public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw; " << amount << ", its address is: " << this << std::endl;
    }
    
    virtual ~Account() = default;
 };
 
 
class SavingsAccount: public Account{
public:
    virtual void withdraw(double amount) override {
        std::cout << "In SavingsAccount::withdraw; " << amount << ", its address is: " << this << std::endl;
    }
    
    virtual ~SavingsAccount() override = default;
 };
 
 
class CheckingAccount: public Account{
public:
    virtual void withdraw(double amount) override {
        std::cout << "In CheckingAccount::withdraw; " << amount << ", its address is: "<< this << std::endl;
    }
    
    virtual ~CheckingAccount() override = default;
};
 
 
class TrustAccount: public SavingsAccount{
public:
   virtual void withdraw(double amount) override {
        std::cout << "In TrustAccount::withdraw; " << amount << ", its address is: " << this << std::endl;
    }
    
    virtual ~TrustAccount() override  = default;
 };
 
 
 // declare function which receive reference to Account(Base class)
 void do_withdraw(Account &account, double amount){
     account.withdraw(amount);
 }
 
 
int main(){
    Account a{}; //Initialize(Instantiate) the Account obj
    Account &ref = a; // Initialize a referce to Account called &ref which refer to a (alias of a)
    std::cout << &a << std::endl;
    std::cout << &ref << std::endl;
    ref.withdraw(1000);     // When we use reference or pointer to Base class and we realize the virtual method in Base class -> the compiler will recognize actual obj in run-time.
    
    TrustAccount t;
    Account &ref1 = t;
    ref1.withdraw(2000);  // Compiler will call TrstAccount::withdraw() method in run-time.
    
    std::cout << " ============= Using functions which receive reference  ============= " << std::endl;
    
    Account a1;
    SavingsAccount a2;
    CheckingAccount a3;
    TrustAccount a4;
    
    do_withdraw(a1, 1000);      // Account::withdaw()
    do_withdraw(a2, 2000);      // SavingsAccount::withdaw()
    do_withdraw(a3, 3000);      // CheckingAccount::withdaw()
    do_withdraw(a4, 4000);      // TrustAccount::withdaw()
    
     return 0;
 }