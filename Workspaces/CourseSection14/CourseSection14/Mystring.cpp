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


// Move Constructor : Steal the pointer attribute of r-value object(temporary object) 
Mystring::Mystring(Mystring &&source) // parameter would be r-value references (represented by double amphersands)
    :str(source.str){ // Steal the pointer by using the initialization list
        // After stealing the pointer of the source (temporary object) -> need to null out the source's pointer
        source.str = nullptr;
        std::cout << " Move c onstructor used" << std::endl;
    }


// Desctructor
Mystring::~Mystring(){
    delete [] str;  // Don't forget to de-allocate the memory we use from Heap
    str = nullptr;  // Despite of de-allocating the memory, we still assign str to null pointer to prevent to be dangling pointer
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;  // iostream will process array of char specifically -> cmd will print the characters, not memory address of first element in char array.
    std::cout << str << " address: " << static_cast<const void*>(str) << std::endl;
}


// Length getter
int Mystring::get_length() const{
    return std::strlen(str);
}


// String getter
const char *Mystring::get_str() const {
    return str;
}

 
 
// Overloaded assignment operator
// returns Mystring (this = myself) object by reference
Mystring& Mystring::operator=(const Mystring &rhs){  // Copy Assignment
    std::cout << "Copy Assignment" << std::endl;

    if (this == &rhs) // Return current object if current object euqal rand-hand-side object
        return *this; // Note: we need to return "reference(alias of that value(object))", not "pointer (memory address)"
        
    // First, we need to de-allocate the origin value where the memory address got from str (the array of characters pointer)
    delete [] this->str; // "this" makes more clear that we de-allocate the deference of str == array of character
    
    // Then, assign the str to allocate the memory address that rhs.str got on the heap (including null terminator)
    str = new char [std::strlen(rhs.str) + 1 ];
    std::strcpy(this->str, rhs.str);  // THe string copy function simply copies one character at a time until it hits the terminating chracter.
    return *this;
        
}

 
 Mystring& Mystring::operator=(Mystring &&rhs){ // Move Assignment -> expecting r-value references
    std::cout << "Move Assignment " << std::endl; 
    
    if (this == &rhs)
        return *this;
        
    // De-allocate the origin deference of pointer on the heap
    delete[] this -> str; 
        
    // Steal the pointer from  r-value object
    this -> str = rhs.str;
   // After stealing the pointer, set source.str to nullptr.
    // Otherwise, when the moved-from object is destroyed,
    // it would delete the same heap memory.
    rhs.str = nullptr;
     
     return *this;
 }
 
 
 
 // Overloaded Unary operator '-'
// Note: Unary operators as class member methods take no parameter (cause we use *this from origin Mystring class)
// return new Mystring object by value -> We're going to take the origin strings, make a new one, return it.





// Overloaded Binary operator '=' : equality
// Note: Binary operatrs as class member methods take one parameter then we don't mess with the source(rhs) Mystring object from parameter 

bool Mystring::operator==(const Mystring &rhs) const {/ Binary Equality: comparisi
    return (std::strcmp(this->str, rhs.str) == 0);
}

// Overloaded Unary operator '-': make lower case
Mytring Mystring::operator-() const {  // the const in the end of method/function: we don't want to change our current object.
    // 1. Make a copy of whatever is in the current object -> need to create a new space to copy -> allocate the new address from heap
    char *buff = new char[std::strlen(this->str) + 1];
    std::strcpy(buff, this->str);
    // 2. Make that lower case
    for (size_t i=0; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    // 3. Then create a new object from it.
    Mystring temp {buff}
    
    // 4. De-allocate the copy we create from the heap
    delete [] buff;
    
    
    return temp;
} 