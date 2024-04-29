// Section 9
// Do-While
// Simple Menu Example 
#include <iostream>
#include <vector>


int main(){
    
//    char selection {' '};
    
//    do {
//        std::cout << "\n ---------------------------- " << std::endl;
//        std::cout << "1. Do this" << std::endl;
//        std::cout << "2. Do that" << std::endl;
//        std::cout << "3. Do something" << std::endl;
//        std::cout << "Q. Quite" << std::endl;
//        std::cout << "\n Enter your selection: ";
//        std::cin >> selection;
//        
//        if (selection == '1')
//            std::cout << "You code 1 - doing this" << std::endl;
//        else if (selection == '2')
//            std::cout << "You code 2 - doing that" << std::endl;
//        else if (selection == '3')
//            std::cout << "You code 3 - doing Something else" << std::endl;
//        else if (selection == 'Q' || selection == 'q') 
//            std::cout << "Goodbye...." << std::endl;
//        else
//            std::cout << "Unknown Option -- try again..." << std::endl;
//            
//            
//        
//    } while(selection != 'q' && selection != 'Q');
//    
    
    std::vector<int> vec{};
    for (auto i : vec)
        std::cout << i << std::endl;
        
    std::cout << "End Loop" << std::endl;
    
    
    std::cout << std::endl;
    return 0;
}
