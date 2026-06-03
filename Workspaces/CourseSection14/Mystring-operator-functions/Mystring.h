#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    // Note: the class has to grant friendship -> So that we can implement friend global functions outside
    // It doesn't really matter where you put these friend declarations in. -> doesn't matter if you put them in private/public area.
    // Overloaded Binary operator '==' as non-member function
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    // Overloaded Unary operator '-' as non-member function
    friend Mystring operator-(const Mystring &obj);
    // Overloaded Binary operator '+' as non-member function
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    
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
    
};


#endif // MYSTRING_H
