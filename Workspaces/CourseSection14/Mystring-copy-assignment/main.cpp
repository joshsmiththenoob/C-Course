// Section 14
// Mystring - starting point
#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;


int main(){
    Mystring a {"Hello"};
    Mystring b ;
    b = a;                          // Copy assignment
    b.display();
    
    b = "This is a test";   // Assignment: we need to initialize(construct) the temporary object for "THis is a test" first, then we could use copy assignment to assign value of str into lhs
    b.display();
    
    
    // More example
    Mystring empty;                 // No-args constructor
    Mystring larry{"Larry"};    // Aver-loaded constructor
    Mystring stooge{larry};     // Copy constructor
    Mystring stooges;              // No-args contsructor
    
    empty = stooge;                 // Copy assigment operator
    
    empty.display();                // Larry: 5
    larry.display();                // Larry: 5
    stooge.display();                // Larry: 5
    empty.display();                // Larry: 5

    stooges = "Larry, Moe, and Curly";  // over-loaded constructor for temporary Mystring object + copy assignment operator
    stooges.display();
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    std::cout << "============ Loop1 ============" <<std::endl;
    for (const Mystring &s: stooges_vec)
        s.display();                    //Larry
                                            //Moe
                                            //Curly
        
    std::cout << "============ Loop2 ============" <<std::endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";              // Copy assignment
        
        
    std::cout << "============ Loop1 ============" <<std::endl;
    for (const Mystring &s: stooges_vec)
        s.display();                    //Changed
                                            //Changed
                                            //Changed
        
        
    
    
    
    return 0;
}