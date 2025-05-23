#include <iostream>
#include <string>
// whole class declaration should put in another .hpp file
class Player{
private:
    std::string name{"XXXXXX"};
    int health;
    int xp;
    
public:
// class method(function) prototype (declaration)
// overloading constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};


// class method(function) implementation (definition) -> should put in another .cpp file
// this constructor just like passing the argument (or constant if there's no argument) to the object of attribute
// however, the attribute of class was initialized by its class declaration
Player::Player(){
    name = "None";
    health = 0;
    xp = 0;
}

//
//Player::Player()
//    : name {"None"}, health {0}, xp {0} {
//}


//Player::Player(std::string name_val){
//    name = name_val;
//    health = 0;
//    xp = 0;
//}

/* To avoid initialized by the class declaration
You can use Initiazliation list to initialize object attribute directly
 */
Player::Player(std::string name_val)
    : name {name_val}, health {0}, xp {0} { // Initialization list could initialize object of attribute directly
}

//Player::Player(std::string name_val, int health_val, int xp_val){
//    name = name_val;
//    health = health_val;
//    xp = xp_val;
//}
Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
}

int main(){
    
    Player empty;
    Player frank("Frank");
    Player villain("Viallain", 100, 55); 
    
    
    std::cout << "\n--------------- Works! -----------------" << std::endl;
    return 0;
}

