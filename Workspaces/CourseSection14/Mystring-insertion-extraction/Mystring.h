#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    //  The class is going to delcare insertion/extraaction operator overloaded as friend non-member functions
    // Stream Insertion operator overloading -> !! return by reference !!
    friend std::ostream &operator<<(std::ostream &os; const Mystring &rhs);
    // Stream Extraction operator overloading -> !! return by reference !!
    friend std::istream &operator>>(std::istream &is; Mystring &rhs); // gonna modify Mystring class cause we need to assign value from stream
    
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
    
    
};


#endif // MYSTRING_H
