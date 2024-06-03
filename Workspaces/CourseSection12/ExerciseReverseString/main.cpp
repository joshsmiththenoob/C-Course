#include <iostream>
#include <string>

int main(){
    std::string str {"James"};
    const char *cstr {str.c_str()};
    std::cout << *(cstr + 4) << std::endl;
    
    std::cout << "Works!" << std::endl;
    return 0;
}