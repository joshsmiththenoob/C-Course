// Section 13
// Accessing Class Members - Class Attributes & Methods
#include <iostream>
#include <string>

class Player{
public: // by default, every attrs & methods are private in the class -> Can't access any of them from any functions 
    // attributes
    std::string name;
    int health;
    int xp;
    
    
    // methods
    void talk(std::string text_to_say){
        std::cout << name << "Says: " << text_to_say << std::endl;
    };
    bool is_dead();
    
};


class Account{
public: // by default, every attrs & methods are private in the class -> Can't access any of them from any functions
// Using Public so that local function could access any attrs, methods of objects
    // attributes
    std::string name;
    double balance;
    
    
    // methods
    void deposit(double bal){
        balance += bal;
        std::cout << "In deposit" << std::endl;
    };
    void withdraw(double bal){
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
    };
    
};




int main() {
    Account frank_account;
    frank_account.name = "frank_account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    Player frank;
    // Set all attributes of new object: frank
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    
    frank.talk("Hi There"); // Will not Compile error, 
    
    
    Player *enemy {new Player}; // Using pointer enemy which point(hold) to the dyanmic memory address of Player object
    // dereferencing 
    (*enemy).name = "Enemy"; // note: remember use () because method operator is prior to deferencing operator
    (*enemy).health = 100;
    // using dot operator to accessing attr, methods of objects which pointer point to: arrow operator= deferencing + dot operator 
    enemy -> xp = 15;
    enemy -> talk("I will destory it");
    
    delete enemy;
    
    std::cout << "------------------------- Works! ---------------------------" << std::endl;
    return 0;
}