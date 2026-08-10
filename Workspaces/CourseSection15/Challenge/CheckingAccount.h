#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"
#include <string>

class CheckingAccount: public Account
{
    // Overloaded Stream Insertion operator by non-global friend function: could access any attributes in the class
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &account);
    
private:
    // Settings class variable in private access -> only for C++11 above.
    // We can change the const variable's value in one place.
    static constexpr const char *def_name = "Unname Checking Account";
    static constexpr const double def_balance = 0.0;
public:
    // Two-args Constructor
    CheckingAccount(std::string name = def_name, double balance = def_balance);

    // Redfined/Overwrited withdraw method
    bool withdraw(double amount);

    // Inherits Account::deposit() methods (Parent's method)

};

#endif // CHECKINGACCOUNT_H
