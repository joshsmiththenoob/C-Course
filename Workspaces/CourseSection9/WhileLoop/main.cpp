// Section 9
// While Loop
#include <iostream>
#include <vector>
#include <limits>


int main(){
//    // Count Down
//    int num {0};
//    std::cout << "Enter a positive integer - start the countdown :";
//    std::cin >> num;
//    
//    
//    while (num > 0){
//        std::cout << num << std::endl;
//        --num;
//    }
//     
//    std::cout << "Blast off!!" << std::endl;


    // Count Up to the target that user want to stop
//    int num {0};
//    std::cout << "Enter a positive integer - start the count up to :";
//    std::cin >> num;
//    
//    
//    int i {1};
//    while (num >= i){
//        std::cout << i << std::endl;
//        ++i;
//    }
//     
//    std::cout << "Blast off!!" << std::endl;
    
    
//    int number {0};
//    std::cout << "Enter an integer (which is) less than 100 :";
//    std::cin >> number;
//    
//    
//    while (number >= 100){ // !(number < 100)
//        std::cout << "Enter an integer (which is) less than 100 :";
//        std::cin >> number;
//    }
//     
//    std::cout << "Thanks! " << std::endl;
    
    
    
//    bool done {false};
//    int number {0};
//    
//    while (!done){
//        std::cout << "Enter an integer between 1 and 5: ";
//        std::cin >> number;
//        
//        if (number <= 1 || number>= 5){
//            std::cin.clear();
//            std::cout << "Out of range, try again, dude!" << std::endl;
//        } else{
//            std::cout << "Thanks!" << std::endl;
//            done = true;
//        }
//    }


    std::vector<int> vec {};
    
    std::cout << "recent vector size: " << vec.size() << std::endl;
    std::cout << "recent vector size -1: " << vec.size() - 1 << std::endl;
    
    std::cout << std::endl;
    return 0;
}