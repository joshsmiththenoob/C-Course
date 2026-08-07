#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>


class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    //Only C++11 and above:  const expression: constants that are available only to the class -> class variable.
    // -> we can change the const variable in one place.
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
        std::string name;
        double balance;
public:
    // Two-args constructor
    Account(std::string name = def_name, double balance = def_balance);
//    Account(std::string name = "Unnamed Account", double balance = 0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance () const;

};

#endif // ACCOUNT_H
