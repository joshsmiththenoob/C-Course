#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>


class Account
{
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
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    double get_balance () const;

};

#endif // ACCOUNT_H
