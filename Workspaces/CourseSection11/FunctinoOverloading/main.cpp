// Section 11
// Functino Overloading: using same name for various forms of that same function.
// Note: Watch out for using default argument values in overloaded function!!
#include <iostream>
#include <string>
#include <vector>

// function prototype
void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);
void print(std::vector<std::string>); // vector of string objects


// function definition (implementation)
void print(int num){
    std::cout << "Printing int: " << num << std::endl;
}


void print(double num){
    std::cout << "Printing double: " << num << std::endl;
}

void print(std::string s){
    std::cout << "Printing string: " << s << std::endl;
}


void print(std::string s1, std::string s2){
    std::cout << "Printing 2 strings: " << s1 << " and "<< s2 << std::endl;
}


void print(std::vector<std::string> s_list){
    std::cout << "Printing vector of strings: " << std::endl;
    
    for (auto s : s_list)
        std::cout << s + " ";
    std::cout << std::endl;
}


int main(){
    
    print(100); // print int
    print('A'); // a character is always prompted to integer (int) -> should print 65 (ASCII code for 'A')
    
    print(123.5); // double
    print(123.3F); // 'F' beind the double value to make double to float -> passing float -> float is promoted to double
    
    print("C-style string"); // C-style string (array of characters) is converted to a C++ string (vector of characters = C++ string object) by C++ Compiler : 
    
    std::string s1 {'C', '+', '+', 's', 't', 'r', 'i', 'n', 'g'}; // Delcare & Initialize C++ string object = vector of characters
    std::string s2 {"C++ strings"}; // Delcare & Initialize C++ string object = vector of characters

    print(s1);
    print(s2);
  
    print("C-style string", s1); // First argument (= C-style string: character of array) is converted to a C++ string object
  
    std::vector<std::string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    
    return 0;
}