#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>


// .h file to delcare the class = class specification

class Player
{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
    
public:
    std::string get_name(){
        return name;
    }
    int get_health(){
        return health;
    }
    int get_xp(){
        return xp;
    }
    
    
    // Constructor function prototype(declaration)
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
    
    
    // Declare static method members
    static int get_num_players();
    
};

#endif


// _PLAYER_H_