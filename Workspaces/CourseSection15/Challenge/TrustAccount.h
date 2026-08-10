#ifndef TRUSTACCOUNT_H
#define TRUSTACCOUNT_H
#include "SavingsAccount.h"
#include <string>

class TrustAccount: public SavingsAccount
{
    // Overloaded Stream Insertion operator by non-global friend function: could access any attributes in the class
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &acc);
    
private:
    // Settings class variable in private access -> only for C++11 above.
    // We can change the const variable's value in one place.
    static constexpr const char *def_name = "Unname Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
protected:
    int withdrawal_count {0};
public:
    // Three-args Constructor
    TrustAccount(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    // Redfined/Overwrited withdraw method
    bool withdraw(double amount);

    // Redfined/Overwrited deposit method
    bool deposit(double amount);
};

#endif // TRUSTACCOUNT_H
