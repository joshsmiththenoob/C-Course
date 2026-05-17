#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
    char *str;  // pointer to array of char (char[]) that holds a C-style string
//    int len;    // In normal situation, the costum string should get monitored of its length. But in this case,  we just ignore it to keep simple as we can
public:
    Mystring();                                                 // No-args constructor
    Mystring(const char *s);                            // Overloaded constructor
    Mystring(const Mystring &source);           // Copy constructor
    
    Mystring(Mystring &&source);          // Move constructor: ofc, the parameter is reference of r-value (double amphersands)
    
    ~Mystring();
    
    void display() const;
    int get_length() const;                              // getters
    const char *get_str() const;                            
    
    
    // Overloaded assignment operator
    // returns Mystring (this = myself) object by reference -> left hand side == current object
    Mystring& operator=(const Mystring &rhs);                      // Copy Assignment
    Mystring& operator=(Mystring &&rhs);                            // Move Assignment
    
    
    // Overloaded Unary operator '-'
    // Note: Unary operators as class member methods take no parameter (cause we use *this from origin Mystring class)
    // return new Mystring object by value -> We're going to take the origin strings, make a new one, return it.
    Mystring operator-() const;                                         // Unary Minus: make lowercase
    
    // Overloaded Binary operator '+'
    // Note: Binary operatrs as class member methods take one parameter then we don't mess with the source(rhs) Mystring object from parameter 
    Mystring operator+(const Mystring &rhs);                  // Binary Plus: concatenate
    
    
};


#endif // MYSTRING_H
