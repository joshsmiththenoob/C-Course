#include "I_Printable.h"

std::ostream &operator(std::ostream &os, const I_Pritable &obj){
    obj.print(os);
    return os
}

