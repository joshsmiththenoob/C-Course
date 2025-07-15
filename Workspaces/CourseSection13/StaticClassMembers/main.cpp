#include <iostream>
#include "Player.h"



void display_active_players(){
    // we can call static members(attributes/methods) directly from calling scope resolution operator of class.hpp
    std::cout << "Acitve players: " << Player::get_num_players() << std::endl;
}

int main(){
    display_active_players();
    
    
    Player hero{"Josh", 100, 8};
    
    display_active_players();
    
    
    {
        Player frank {"Frank"};
        display_active_players();
    }
    
    // Create pointer to Player(object = a kind of datatype)
    Player *enemy_ptr {new Player("Enemy", 100, 100)};
    
    
    // Out of scope will distory all variables (object) in that scope.
    display_active_players();
    
    // Delete pointer that specific adderss could be released 
    delete enemy_ptr;
    
    display_active_players();
    
    
    std::cout << "Testing for C++"  << std::endl;
    
    return 0;
}