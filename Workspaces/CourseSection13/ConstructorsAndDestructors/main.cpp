#include <iostream>
#include <string>
#include "Player.hpp"

int main(){
    
    // create the sub-local scope -> block scope created on the STACK memory like function do 
    {
        // create object of class
        Player slayer;
        slayer.set_name("Slayer");
    }// When the object of class goes out of scope -> object's destructor activated -> object destroyed
    
    
    // create the sub-local scope -> blcok scope created on the STACK memory
    {
        // create object of class
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }// When the object of class goes out of scope -> object's destructor activated -> object destroyed
    // the destructors are called in the reverse order in which they were created.
    
    // the rest of object are created in the local function scope block
    // create pointer to Player object which point the new dynamic memory that the pointer can allocate dynamice memory which can store object of class
    Player *enemy {nullptr};
    enemy = new Player;
    enemy -> set_name("Enemy"); // use arrow to let pointer of class access members of deference of class(attrs & methods) directly
    
    Player *level_boss {nullptr};
    level_boss = new Player("Level Boss", 1000, 300);
    
    
    // remember, need to add [] when delete pointer which point to the array in the heap (dynamic memory)
    delete enemy;
    delete level_boss;
    
    
    std::cout << "---------------------- Works! ---------------------" << std::endl;
    return 0;
}