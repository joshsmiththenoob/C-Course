# include <string>
# include <iostream>

// Declare class and its members(attribute & methods)
class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    // I gurantee that I'm not changing that object in this method!!
    // Need to add const after parameter list
    std::string get_name() const{
        return name;
    }
    \
    
    void set_name(std::string name_val){
        name = name_val;
    }
    
    // Overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

// Implement methods of class including constructors
Player::Player()
    :Player("None", 0, 0){
}

Player::Player(std::string name_val)
    :Player(name_val, 0, 0){
}


Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
}


// Declare and Implement function
void display_player_name(const Player &p){
    std::cout << p.get_name() << std::endl;
}

int main(){
    
    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};

    
    villain.set_name("Super_Villain");
    std::cout << villain.get_name() << std::endl;
    std::cout << hero.get_name() << std::endl;
    
    display_player_name(villain);
    display_player_name(hero);
    
    
    return 0;
}