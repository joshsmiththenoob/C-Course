#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H
#include <iostream>

class I_Printable
{
friend std::ostream &operator(std::ostream &os, const I_Pritable &obj)
public:
    virtual print(std::ostream &os) const = 0;  // const at the end: let method promise it didn't modify any members of object.
    virtual ~I_Printable() = default; // -> default: tells compiler just generate a simple virtual destructor for me in default.

};

#endif // I_PRINTABLE_H
