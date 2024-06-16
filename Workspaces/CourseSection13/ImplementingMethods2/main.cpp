// Section 13
// implementing member methods 2
#include <iostream>
#include "Account.hpp"

int main(){
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        std::cout << "Deposit OK" << std::endl;
    else
        std::cout << "Deposit not allowed" << std::endl;
    
    
    if (frank_account.withdraw(500.0))
        std::cout << "Withdrawal OK" << std::endl;
    else
        std::cout << "insufiicient funds!" << std::endl;
        
    if (frank_account.withdraw(1500.0))
        std::cout << "Withdrawal OK" << std::endl;
    else
        std::cout << "insufiicient funds!" << std::endl;
        
    std::cout << "Now the balance of " << frank_account.get_name() << " is: " << frank_account.get_balance() << std::endl;
    
    std::cout << "-------------------------- Works! ----------------------" << std::endl;
    return 0;
}