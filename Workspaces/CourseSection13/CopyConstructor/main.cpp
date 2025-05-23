#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(){ // function. method prototype & implementation
        return name;
    }
    int get_health(){
        return health;
    int get_xp(){
        return xp;
    }
    
    // Constructor method declaration (function/method prototype)
    // note: need to add ";" at the end of function/method prototype
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    
    // Copy Constructor method prototype
    Player(const Player &source);
    
    // Destructor method prototype
    ~Player(){
        std::cout << "Destructor called for: " << name << std::endl;
    }
};


// class constructor implmentation
Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        // once attribute initialized, we can print it out
        std::cout << "Three-args constructor for" + name << std::endl;
    }

// class copy constructor implementation
// use referece of source object so that the source can not be copied in method/function scope! -> we need to copy it by ourself
Player::Player(const Player &source)
    //: name {source.name}, health {source.health}, xp {source.xp} {
    :Player {source.name, source.health, source.xp} { // delegating another constructor method to create another object
        std::cout << "Copy constructor -made copy of: " << source.name << std::endl;
    }


void display_player(Player p){
    // dafult: function will copy the p in function/method scope
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;

}


int main(){
    Player empty {"XXXXXX", 100, 50};
    
    Player my_new_object {empty};
    
    display_player(empty);
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};

    
        
    // copy object with copy constructor
    
    std::cout << "------------------ Works! ------------------------" << std::endl;
    return 0;
}