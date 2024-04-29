// Section 9
//For Loop
#include <iostream>
#include <vector>

int main(){
//    
//    for (int i {1}; i < 11 ; ++i)
//        std::cout << i << std::endl;
//    
//    std::cout << "=========== boundary ==========" << std::endl;
//    
//    
//    for (int i {1}; i < 11 ; i += 2){
//        std::cout << i << std::endl;
//    }

//    for (int i {10}; i > 0 ; --i){
//        std::cout << i << std::endl;
//    }
//    std::cout << "Blastoff!!" << std::endl;

//    for (int i {10}; i <= 100; i+=10){
//        if (i % 15 == 0){
//            std::cout << i << std::endl;
//        }
//    }
    
    
//    for (int i {1}, j {5}; i <= 5 ; i++, ++j){
//        std::cout << i << " + " << j << " = " << (i+j) << std::endl;
//    }


//    for (int i {1}; i<=100; i++){
//        std::cout << i;
//        if (i % 5 == 0){
//            std::cout << std::endl;
//        }else{
//            std::cout << " ";
//        }
//    }
//    

//
//    // We can use COnditional operator to realize the same resault of last example
//    for (int i {1}; i <= 100; i ++){
//        std::cout << i;
//        std::cout << ((i % 10 == 0) ? "\n" : " ");
//    }
//    
//    
//    
//    // Even we can use Just one line to realize the same resault of last example
//    for (int i {1}; i <= 100; i ++){
//        std::cout << i << ((i % 10 == 0) ? "\n" : " ");
//    }


    // Iteration in vector
    // Note: nums.size() return unsign integer -> the i, num.size() in condition expression i < num.size() are different data type: (signed) int vs long ong unsigned int 
    // So we need to delcare the right data type of i = unsigned int i {0} 
    std::vector<int> nums {10, 20, 30, 40, 50};
    for (unsigned int i {0}; i < nums.size(); i ++){
        std::cout << nums[i] << std::endl;
    }
    

    
    std::cout << std::endl;
    return 0;
}