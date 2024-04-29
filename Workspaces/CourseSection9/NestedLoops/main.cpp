#include <iostream>

int main(){
    
    int num [9] {0}; // Initialize array of integer, and initialize size (shape = (,9)) and its element was 0
    for (int i {0}; i < 10 ; i++)
        std::cout << num[i] << std::endl;
    
    return 0;
}