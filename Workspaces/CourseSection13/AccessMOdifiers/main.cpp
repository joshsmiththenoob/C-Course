#include <iostream>
#include <string>

class Player{
    private: // it will be default  when user didn't mention any access modifier : any function, class out of this class will NOT ACCESS the memebers(attributes, methods) of class
    // attributes
    std::string name {"Player"};
    int health;
    int xp;
    
    public: // any class, function will have ACCESS for members of class
    // methods
    void talk(std::string text_to_say){
        std::cout << name << " says: " << text_to_say << std::endl;
    };
    bool is_dead();
};



int main(){
    Player frank;
//    frank.name = "frank";
//    std::cout << frank.health << std::endl;
    frank.talk("Hello there");
//    frank.is_dead();
    
    
    std::cout << "---------------------------- Works! ---------------------" << std::endl;
    
    return 0;
}