#include "Player.h"

// class.cpp file will implements the class data member's initialization, class method member's implementation


// Initalize the static data members here
int Player::num_players {0};




// Method implementation
// Static methods only access static data members (the data member with static qualifer)
int Player::get_num_players(){
    return num_players;
}


// Constructor implementation
Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        ++num_players;
    }


// Destructor implemenation
Player::~Player(){
    --num_players;
}


