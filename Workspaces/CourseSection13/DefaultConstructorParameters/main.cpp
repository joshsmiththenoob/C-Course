// Section 13
// Default Constructor Parameters
#include <iostream>
#include <string>


class Player{
private:
    std::string name;
    int health;
    int xp;
    
public:
    // Declare overloaded Constructors methods -> like __init__ methods in Python -> Declaration can move to .hpp file
//    Player();
//    Player(std::string name_val);
    // Use default values on method(function) delcaration (method/function prototype) -> so that we didn't need too many overloaded constructors
    Player(std::string name_val = "None", int health = 0, int xp = 0); 
};


//// the implementation of class' method can move to .cpp file which should include corresponding .hpp file
//Player::Player()
//    :Player{"None", 0, 0} { // using delegating method to call another constructor to receive parameter
//    std::cout << "No-args constructor" << std::endl;
//}
//
//Player::Player(std::string name_val)
//    :Player{name_val, 0, 0} { // same as the constructor above -> delegate the other constructor method who receive all parameter
//    std::cout << "One-arg constructor" << std::endl;
//}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} { // Using initializer list to initalize attribute directly 
    std::cout << "Three-args constructor" << std::endl;
}



int main(){
    
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
    
    
    std::cout << "------------------------ Works! ----------------------------" << std::endl;
    
    return 0;
}