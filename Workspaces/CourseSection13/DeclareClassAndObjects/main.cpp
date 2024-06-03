// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

class Player{
    // attributes
    std::string name {""};
    int health {};
    int xp {};
    
    // methods : for now, insturctor use function prototype 
    void talk(std::string);
    bool is_dead();
    
};


int main(){
    Player frank;
    Player hero;
    
    Player players[] {frank, hero}; // variable players is an array of Player objects -> 
    std::vector<Player> players1 {frank, hero}; // variable players is an vector of Player objects -> 
    
    
    Player *enemy_ptr {nullptr};  // Pointer to player class = std::string *str_ptr {nullptr}; Note: pointer must to be initialized! or It could point anywhere. 
    enemy_ptr = new Player; // allocate dynamically memory - heap by using new pointed by pointer : pointer hold the address
    
    delete enemy_ptr;
    
    
    std::cout << "\n------------------------- Works! --------------------------" << std::endl;
    
    return 0;
}