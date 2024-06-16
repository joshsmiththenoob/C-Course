#include "Account.hpp" 
#include <string>

// methods will be implemented outside the class declaration
void Account::set_name(std::string n){ // we have to define (implement) set_name method for the account class -> prefix the method with class by scope resolution operator
    name = n;
}// implementation of class method = can access any attribute, method in class with class scope resolution


std::string Account::get_name(){
    return name;
}


bool Account::deposit(double amount){
    // if verify amount
    balance += amount;
    return balance;
}

bool Account::withdraw(double amount){
    if (balance - amount >= 0){
        balance -= amount;
        return true;
    } else {
        return false;
    }
}
