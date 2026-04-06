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
    
    ~Mystring();
    
    void display() const;
    int get_length() const;                              // getters
    const char *get_str() const;                            
    
    
    // Overloaded assignment operator
    // returns Mystring (this = myself) object by reference -> left hand side == current object
    Mystring& operator=(const Mystring &rhs);                      // Copy Assignment
    
};


#endif // MYSTRING_H
