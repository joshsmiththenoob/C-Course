// Section 9
// Nested Loops - Histogram

#include <iostream>
#include <vector>

int main(){
    
    // using loop for vector
    int num_elements{0};
    std::cout << "How many elements you have? :";
    std::cin >> num_elements;
    
    // declare vector
    std::vector<int> data {};
    
    
    for (int i {0} ; i < num_elements ; ++i){
        
        int element {0};
        std::cout << "what value do you want to insert on element " << i << "? :";
        std::cin >> element;
        data.push_back(element);
    }
    
    std::cout << "\nDisplaying Histogram" << std::endl;
    
    // loop in range-based vector/array to display dashes that we got histogram
    for (auto val: data){
        // Display dashes using for loop in specific value of element
        for (int i {1}; i <= val ; ++i){
            if (i % 5 == 0)
                // Print out asterisk every fifth number
                std::cout << '*';
            else
                std::cout << "-";
        }
        std::cout << std::endl;
    }
        


//    std::vector<int> vec{2, 4, 6, 8};
//    for (unsigned int i {0}; i < vec.size(); ++i){
//        std::cout << "current value in outer loop :" << vec[i] << std::endl;
//        for (unsigned int j {i+1}; j < vec.size(); ++j){
//            std::cout << "current value in inner loop :" << vec[j] << std::endl;
//            std::cout << vec[i] << " * " << vec[j] << " = " << vec[i] * vec[j]<<std::endl;
//        }
//    }
//    
    
    std::cout << std::endl;
    return 0;
}