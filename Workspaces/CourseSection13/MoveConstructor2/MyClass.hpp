#ifndef _MYCLASS_H_
#define _MYCLASS_H_
#include <string>


// class and its member (attribute, methods) declaration (methods prototype)

//class MyClass
//{
//private:
//    int x;
//public:
//    void set_x(int x_value);
//    
//    // Constructor method declaration (function/method prototype)
//    MyClass(int x_value);
//    
//    // Copy Constructor method prototype
//    MyClass(const MyClass &source);
//    
//    // Destructor
//    ~MyClass();
//    
//};

class Move{
private:
    int *data; // Initalize pointer of integer
public:
    int get_data_value();
    void set_data_value(int d);
    
    // Constructor method declaration (function/method prototype)
    Move(int d);
    
    // Copy Constructor
    Move(const Move &source);
    
    // Move Constructor 
    Move(Move &&source) noexcept; // Uitlize r-value to get data of source instead of l-value variable
    
    // Destroctur
    ~Move();
    

};


#endif // PLAYER_HPP