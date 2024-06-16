#include <string>
#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

// class and its member (attribute, methods) declaration (methods prototype)

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string);
    // Overloaded Constructors
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    
    // Destructor
    ~Player();

};

#endif // PLAYER_HPP
