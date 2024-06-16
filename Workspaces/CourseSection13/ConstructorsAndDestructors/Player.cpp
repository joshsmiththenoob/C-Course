#include "Player.hpp"
#include <iostream>
#include <string>

// Method implementations
void Player::set_name(std::string n){
    name = n;
}

// Overloaded Constructors
Player::Player(){
    std::cout << "No args constructor called" << std::endl;
}

Player::Player(std::string name){
    std::cout << "String arg constructor called" << std::endl;
}

Player::Player(std::string name, int health, int xp){
    std::cout << "3 args constructor called" << std::endl;

}


// Destroctor
Player::~Player()
{
    std::cout << "Destructor called for " << name << std::endl;
}

