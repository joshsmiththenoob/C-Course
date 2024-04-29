// Section 9
// Challenge 

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    

/*
 * Method I: while loop
 * 
 */
    std::vector<int> vec {};
    char command {' '};
    bool done {false};
    while (!done){
        // Display menu
        std::cout << "\nP - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - DIsplay the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        
        std::cout << "\nEnter your choice: ";
        std::cin >> command;
        std::cout << std::endl;
        
        if (command == 'Q' || command == 'q'){
            std::cout << "Goodbye!" << std::endl;
            done = true;
            
        } else if(command == 'A' || command == 'a'){
            int val {0};
            std::cout << "Enter an integer to add to the list: ";
            std::cin >> val;
            vec.push_back(val);
            std::cout << val << " added" << std::endl;
            
        } else if (command == 'P' || command == 'p'){
            if (vec.empty())
                std::cout << "[] - the list is empty" << std::endl;
            else{
                std::cout << "[ ";
                for (auto elem: vec)
                    std::cout << elem << ' ';
                std::cout << "]" << std::endl;
            }
            
        } else if(command == 'M' || command == 'm'){
            if (vec.empty())
                std::cout << "Unable to calculate the mean - no data" << std::endl;
            else{
                double mean {0};
                for (auto elem: vec)
                    mean += elem;
                mean /= vec.size();
                std::cout << "The average/mean number is: " << mean << std::endl;;
            }
            
        } else if(command == 'S' || command == 's'){
            if (vec.empty())
                std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
            else{
                int min {0};
                // Method I: Comparing every element to get minimum
                for (auto num: vec)
                    if (num < min)
                        min = num;
                // Method II: Using pointer to get the memorey address of min_element(vec.begin(), vec.end())
                // min = *std::min_element(vec.begin(), vec.end());
                // std::cout << "The smallest number is " << min << std::endl;
            }
            
        } else if (command == 'L' || command == 'l'){
            if (vec.empty())
                std::cout << "Unable to determine the largest number - list is empty" << std::endl;
            else{
                int max {0};
                // Method I: Comparing every element to get maximum
                for (auto num: vec)
                    if (num > max)
                        max = num;
                // Method II: Using Pointer to get value of address the variable(result) of max_element method has 
                // max = *std::max_element(vec.begin(), vec.end());
                // std::cout << "The largest number is " << max << std::endl;
            }
            
        } else{
            std::cout << "Unknown selection, please try again!" << std::endl;
        }
    }
    
    
/*
 * Method II: do-while loop
 * 
 */
    
//    std::vector<int> vec {};
//    char command {' '};
//    do {
//        // Display menu
//        std::cout << "----------------------------------" << std::endl;
//        std::cout << "P - Print numbers" << std::endl;
//        std::cout << "A - Add a number" << std::endl;
//        std::cout << "M - Display mean of the numbers" << std::endl;
//        std::cout << "S - Display the smallest number" << std::endl;
//        std::cout << "L - DIsplay the largest number" << std::endl;
//        std::cout << "Q - Quit" << std::endl;
//        
//        std::cout << "\nEnter your choice: ";
//        std::cin >> command;
//        std::cout << std::endl;
//        
//        if (command == 'Q' || command == 'q'){
//            std::cout << "Goodbye!" << std::endl;
//            
//        } else if(command == 'A' || command == 'a'){
//            int val {0};
//            std::cout << "Enter an integer to add to the list: ";
//            std::cin >> val;
//            vec.push_back(val);
//            std::cout << val << " added" << std::endl;
//            
//        } else if (command == 'P' || command == 'p'){
//            if (vec.empty())
//                std::cout << "[] - the list is empty" << std::endl;
//            else{
//                std::cout << "[ ";
//                for (auto elem: vec)
//                    std::cout << elem << ' ';
//                std::cout << "]" << std::endl;
//            }
//            
//        } else if(command == 'M' || command == 'm'){
//            if (vec.empty())
//                std::cout << "Unable to calculate the mean - no data" << std::endl;
//            else{
//                double mean {0};
//                for (auto elem: vec)
//                    mean += elem;
//                mean /= vec.size();
//                std::cout << "The average/mean number is: " << mean << std::endl;;
//            }
//            
//        } else if(command == 'S' || command == 's'){
//            if (vec.empty())
//                std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
//            else{
//                int min {0};
//                // Method I: Comparing every element to get minimum
//                for (auto num: vec)
//                    if (num < min)
//                        min = num;
//                // Method II: Using pointer to get the memorey address of min_element(vec.begin(), vec.end())
//                // min = *std::min_element(vec.begin(), vec.end());
//                std::cout << "The smallest number is " << min << std::endl;
//            }
//            
//        } else if (command == 'L' || command == 'l'){
//            if (vec.empty())
//                std::cout << "Unable to determine the largest number - list is empty" << std::endl;
//            else{
//                int max {0};
//                // Method I: Comparing every element to get maximum
//                for (auto num: vec)
//                    if (num > max)
//                        max = num;
//                // Method II: Using Pointer to get value of address the variable(result) of max_element method has 
//                // max = *std::max_element(vec.begin(), vec.end());
//                std::cout << "The largest number is " << max << std::endl;
//            }
//            
//        } else{
//            std::cout << "Unknown selection, please try again!" << std::endl;
//        }
//    } while (command != 'Q' && command != 'q');
//    
    std::cout << std::endl;
    return 0;
}