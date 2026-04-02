#include <cstring>
#include <iostream>
#include "Mystring.h"


// No-args Constructor
Mystring::Mystring()
    : str{nullptr}  // Initialization list
{
    str = new char[1];  // Create a new variable str and assign it with pointer of array of character which get 1-only element
    *str = '\0'; // Just set the ended character(null terminator) first -> "" (equals to the empty string)
}


// Overloaded Constructor
Mystring::Mystring(const char *s)  // args: pointer of character: the source will be const 
    : str {nullptr}
{
    if (s == nullptr){ // if the pointer just point nothing (didn't point any real address)
        str = new char[1];
        *str = '\0'; // The True 
    } else {
        // We should copy the origin value of s and assign it to the new array of character
        // The Origin value of string source involves null terminator ('/0') -> we don't assign it additionally.
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);  // copy string of s to str 
    }
    
}


// Copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str); // copy source's str (it is array of character -> its memory address [0] == character 
    }


// Desctructor
Mystring::~Mystring(){
    delete [] str;  // Don't forget to de-allocate the memory we use from Heap
    str = nullptr;  // Despite of de-allocating the memory, we still assign str to null pointer to prevent to be dangling pointer
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;  // iostream will process array of char specifically -> cmd will print the characters, not memory address of first element in char array.
}


// Length getter
int Mystring::get_length() const{
    return std::strlen(str);
}

// String getter
const char *Mystring::get_str() const {
    return str;
}

 
