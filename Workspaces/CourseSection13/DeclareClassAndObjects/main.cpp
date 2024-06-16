// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

class Player{
    // attributes
    std::string name {"Player"}; // uninitialized string -> string class will initialized to empty string "" automatically
    int health {10};  // unintialized int -> garbage data
    int xp {3}; // unintialized xp -> garbage data
    
    /* methods : for now, insturctor use function prototype 
     * if we call the method of class without implementation (definition) 
     * -> Linker error: don't know where function definition (implemenation) is
     */ 
    void talk(std::string);
    bool is_dead();
    
}; // Don't foroget semicolon on the end of class declaration


class Account{
    // attributes
    std::string name {"Account"}; // uninitialized string -> string class will initialized to empty string "" automatically
    double balance {0.0}; // uninitialized double -> garbage data
    
    // methods: only function declaration(prototype) without function definition(implementation)
    bool deposit(double);
    bool withdraw(double);
  
};


int main(){
    Account frank_account;
    Account jim_accout;
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero}; // variable players is an array of Player objects -> 
    
    
    Player *enemy_ptr {nullptr};  // Pointer to player class = std::string *str_ptr {nullptr}; Note: pointer must to be initialized! or It could point anywhere. 
    enemy_ptr = new Player; // allocate dynamically memory - heap by using new pointed by pointer : pointer hold the address
    
    
    std::vector<Player> player_vec{frank}; // a vector (collection) of Player objects
    player_vec.push_back(hero);
    
    delete enemy_ptr;
    
    
    std::cout << "\n------------------------- Works! --------------------------" << std::endl;
    
    return 0;
}