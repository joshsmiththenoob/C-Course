#include <iostream>
// This is a comment

/* 
This is a multiple
   Line
    Comment
     what ever~
      
*/

int main()
{
    int favorite_number; // This is where my favorite number is store  
    
    std::cout << "Enter your favorite number between 1 and 100 : ";
    
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! That's my favorite number too!"<< std::endl;

    std::cout << "No Really!!! " << favorite_number << " is my favorite number!!" << std::endl;
    
    
    return 0;
}