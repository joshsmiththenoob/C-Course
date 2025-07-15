// Section 9
// Switch with enumeration
// Need to search enumeration type if you want to know more knowledge of enum data type
#include <iostream>

int main(){
    
    // When you delcare the enumeration -> You create a NEW TYPE!!
    // in any enumeration type : data type of every element in enumeration is int or char : that's what your NUMERATIONS are !
    enum Direction{
        left, right, up , down
    };
    
    Direction heading {right}; // Declare the NEW enumeration: Direction type to variable heading and initialize it to left = const int type
    
    
    // Switch off (Using Switch Case) of variable:heading 
    /*
     * Note: you really should be handling all cases in your switch or using a default to handle the fall through in case one of them which doesn't match in any 
     * numeration in enumeration type
     */
    switch (heading){
        case left:
        {
            std::cout << "Going left" << std::endl;
            break;
        }
        case right:
        {
            std::cout << "Going right" << std::endl;
            break;
        }
        default:
        {
            std::cout << "OK" << std::endl;
        }
    }

    
    return 0;
}