#include <iostream>


int main(){
    int x {100};
    
    // initialize l-value reference
    int &l_ref {x};
    l_ref = 10;
    
    // initialize r-value reference
    int &&r_ref {200};
    r_ref = 300;
    
    std::cout << "x address: " << &x << std::endl;
    std::cout << "l_ref address: " << &l_ref << std::endl;
    std::cout << "r_ref address: " << &r_ref << std::endl;  // 可能和 x 地址不同
    
    // Cant assign l-value to r-value reference
//    int &&x_ref {x};
    
    
    return 0;
}