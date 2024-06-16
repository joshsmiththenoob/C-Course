// Section 13
// Implementing member methods 1

#include <iostream>
#include <string>


//class Account{
//private:
//    // attribute
//    std::string name;
//    double balance;
//    
//    
//public:
//    // methods
//    void set_balance(double bal){
//        balance += bal;
//    }
//    double get_balance(){
//        return balance;
//    }
//    
//    // methods will be implemented outside the class declaration
//    void set_name(std::string n);
//    std::string get_name();
//    
//    bool deposit(double amount);
//    bool withdraw(double amount);
//};
//
//void Account::set_name(std::string n){ // we have to define (implement) set_name method for the account class -> prefix the method with class by scope resolution operator
//    name = n;
//}// implementation of class method = can access any attribute, method in class with class scope resolution
//
//
//std::string Account::get_name(){
//    return name;
//}
//
//
//bool Account::deposit(double amount){
//    // if verify amount
//    balance += amount;
//    return balance;
//}
//
//bool Account::withdraw(double amount){
//    if (balance - amount >= 0){
//        balance -= amount;
//        return true;
//    } else {
//        return false;
//    }
//}
//
//
//int main(){
//    Account frank_account;
//    frank_account.set_name("Frank's account");
//    frank_account.set_balance(1000.0);
//    
//    if (frank_account.deposit(200.0))
//        std::cout << "Deposit OK" << std::endl;
//    else
//        std::cout << "Deposit not allowed" << std::endl;
//    
//    
//    if (frank_account.withdraw(500.0))
//        std::cout << "Withdrawal OK" << std::endl;
//    else
//        std::cout << "insufiicient funds!" << std::endl;
//        
//    if (frank_account.withdraw(1500.0))
//        std::cout << "Withdrawal OK" << std::endl;
//    else
//        std::cout << "insufiicient funds!" << std::endl;
//        
//    std::cout << "Now the balance of " << frank_account.get_name() << " is: " << frank_account.get_balance() << std::endl;
//    
//    std::cout << "-------------------------- Works! ----------------------" << std::endl;
//    return 0;
//}


int main(){
    
    int a {10};
    int *int_ptr1 {nullptr};
    int *int_ptr2 {nullptr};
    int b {a};
    
    int_ptr1 = int_ptr2 = &a; // remember, pointers hold the address -> they got the same datatype (address) -> allocate the same size of memory
    
    std::cout << " Address the pointer1 pointing to is: " << int_ptr1 << std::endl; 
    std::cout << " Address the pointer2 pointing to is: " << int_ptr2 << std::endl; 
    std::cout << " Address of the variable b is: " << &b << std::endl;
    
    // change the value (dereference) of memory address the pointer pointing to
    *int_ptr1 = 100;
    
    
    
    std::cout << "---------------------- Works! --------------------------------" << std::endl;
    return 0;
}