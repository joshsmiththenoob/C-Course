#include "CheckingAccount.h"
#include "Account.h"
#include <string>


// Overloaded Stream Insertion operator << by non-global friend function
std::ostream &operator<<(std::ostream &os, const CheckingAccount &account){
    // Insert message to ostream object which is reference of std::ostream
    // 1. Delegate Overloaded stream insertion operator by non-global Account's friend function 
    //      need to convert the data type to Account first >> use static_cast<datatype>
    os << static_cast<const Account&>(account) 
    // 2. Then insert our specialized message of Checking account if we need.
        << " by CheckingAccount";
    return os;
}


// 2-args Constructor
CheckingAccount::CheckingAccount(std::string name, double balance)
    : Account{name, balance} // Delegate parent class constructor method.
    {

    }



// Redefined/Overwrited withdraw method
bool CheckingAccount::withdraw(double amount){
    // Need flat fee of $1.50 per with drawal transaction.
    amount += this->per_check_fee;
    return Account::withdraw(amount);
}

