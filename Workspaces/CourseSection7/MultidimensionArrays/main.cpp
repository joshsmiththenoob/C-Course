// Multi-dimensional Arrays
#include <iostream>

int main()
{
// Declare Multi-dimensional Arrays
    int multiarray [2][3] ; // uninitialized
    std::cout << "There is my multi-array " << multiarray << std::endl; // get junk values because of uninitialized
    
    char uninitialized_multiarray [2][3] // declared & initialized
    {
        {3,4,5},
        {4,5,6},
    };
    
    std::cout << "There is my multi-array " << uninitialized_multiarray[0][0] << std::endl; // get junk values because of uninitialized
    
    return 0;
    
}
