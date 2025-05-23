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
/* 3 Constructors Initialization would be duplicated
 * like Player::Player() : name{arugment}, health{arugment}, xp{arugment} -> duplicated..
 * We can let 2 Constructor delegate only 1 Constructor to deal with this by passing arguments!
 */ 
//Player::Player()
//    : name {"None"}, health {0}, xp {0} {
//}
Player::Player()
    : Player{"None", 0, 0} { // this constructor delegating specific constructor who could get enough parameter to initialize the same format of initialized list)
    std::cout << "No-args constructor pass the argument to 3-args constructor" << std::endl;
}

Player::Player(std::string name_val)
    : Player{name_val, 0, 0} { // this constructor delegating specific constructor who could get enough parameter to initialize the same format of initialized list)
     std::cout << "1-args constructor pass the argument to 3-args constructor" << std::endl;
}

// The constructor below will receive the argument by other 2 constructor and pass it to parameter list so that it can intialize the same format of intiailization list
Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
     std::cout << "3-args constructor initialize the attribute member " << std::endl;
}

int main(){
    
//    Player empty;
//    Player frank("Frank");
//    Player villain("Viallain", 100, 55); 
//    
//    
//

    int *int_ptr {new int};
    std::cout << *int_ptr << std::endl;
    *int_ptr = 22;
    std::cout << *int_ptr << std::endl;
    delete int_ptr;
    std::cout << "\n--------------- Works! -----------------" << std::endl;
    return 0;

}

