#include <iostream>
#include <vector>


int main(){
    
    int num {100};
    int &ref {num}; //ref is alias of num by using references
    
    std::cout << num << std::endl;
    std::cout << ref << std::endl;
    
    num = 200;
    std::cout << "\n --------------------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    ref = 300;
    std::cout << "\n --------------------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;
    
    std::cout << "\n --------------- Works! -----------------" << std::endl;
    
    
    std::cout << &ref << std::endl;
    std::cout << &num << std::endl;
    return 0;
}