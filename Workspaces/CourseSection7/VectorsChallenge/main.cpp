/* Section 7
 Challenge
 Write a C++ program as follows:
 */
#include <iostream>
#include <vector>

/* Declare 2 empty vectors of intergers named
   vector1 and vector2, respectively.
*/

int main()
{
    std::vector <int> vector1;
    std::vector <int> vector2;
    
    //Add 100 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(100);
    // Display all element in the vector1
    std::cout << "\nvector1 has the elements: "<< std::endl;
    std::cout << vector1.at(0) << std::endl;
    std::cout << vector1.at(1) << std::endl;
    std::cout << "And the size of vector1 is: " << vector1.size() << std::endl;
    
    // Same as vector2 but dd 100 and 200 to vector2 dynamically
    vector2.push_back(100);
    vector2.push_back(200);
    std::cout << "\nvector2 has the elements: "<< std::endl;
    std::cout << vector2.at(0) << std::endl;
    std::cout << vector2.at(1) << std::endl;
    std::cout << "And the size of vector2 is: " << vector2.size() << std::endl;
    
    
    // Declare an empty 2D vector called vector_2d
    // Remember, that a 2D vector is a vector of vector <int>
    std::vector <std::vector <int>> vector_2d;
    // Add vector1 to vector_2d dynamically using push_back
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    // Display the elements in vector_2d using the at() method
    std::cout <<"\nOk, the elements of first vector in vector_2d are: " << std::endl;
    std::cout << vector_2d.at(0).at(0) << " and "
    << vector_2d.at(0).at(1) << std::endl;
    
    std::cout <<"\nand  the elements of second vector in vector_2d are: " << std::endl;
    std::cout << vector_2d.at(1).at(0) << " and "
    << vector_2d.at(1).at(1) << std::endl;
    
    
    // Change vector1.at(0) to 1000
    std::cout << "\nChange the fist element of vector1, Let's see what happened" << std::endl;
    vector1.at(0) = 1000;
    std::cout <<"\nAnd mow, the elements of first vector in vector_2d are: " << std::endl;
    std::cout << vector_2d.at(0).at(0) << " and "
    << vector_2d.at(0).at(1) << std::endl;
    
    std::cout <<"\nAnd the elements of vector1 are: "<< std::endl;
    std::cout << vector1.at(0) << " and " << vector1.at(1) << std::endl;
    
    
    return 0;
}