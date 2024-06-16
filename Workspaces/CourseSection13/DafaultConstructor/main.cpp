#include <iostream>
#include <string>


class Player{
private:
    // Player attribute is uninitialized -> garbage data
    std::string name;
    int health;
    int xp;
    
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    
    std::string get_name(){
        return name;
    }
    
    // Constructor with dault value for instantiate object
    Player(){
        name = "None";
        health = 100;
        xp = 3;
    }

    // If we create the constructor, the C++ compiler will no longer create default constructor automatically
    // create the overloaded constructor with no arguement if you need
    Player(std::string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
        
};


int main(){
 
    Player hero;
    Player frank("Frank", 100, 13);
    frank.set_name("Frank");
    
    std::cout << frank.get_name() << std::endl;

    
    std::cout << "------------ Works! -------------" << std::endl;
    return 0;
}