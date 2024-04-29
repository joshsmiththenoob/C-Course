// Section 9
// Range_Based For Loop
#include <iostream>
#include <vector>
#include <iomanip>


int main(){
    
//    int scores[] {10, 20, 30}; // declare array without size in beginning, and its size will be confirmed after initialize it with element
//    
//    
//    // Can use "auto" data type to auto detect what data type of element in array is and delcare it to variable
//    for (auto score: scores){
//        std::cout << score << std::endl;
//    }
    
    
//    std::vector<double> temperature {87.9, 88.9, 80.0, 72.5};
//    double average_temp {0};
//    double total {0};
//    
//    for (auto temp: temperature){
//        total += temp;
//    }
//    
//    if (temperature.size() != 0)
//        average_temp = total / temperature.size();
//        
//    std::cout << std::fixed << std::setprecision(1); // using iomanip.h to manipulate what digital num we want to display
//    std::cout << average_temp << std::endl;


//    // Not usual to use
//    for (auto val: {1, 2, 3, 4, 5})
//        std::cout << val << std::endl;


    // iterate in string: using C-style string for example
//    for (auto c: "This is a test")
//        if (c != ' ')
//            std::cout << c;


    for (auto c: "This is a test")
        if (c == ' ')
            std::cout << "\t";
        else
            std::cout <<c;

//    int count {0};
//    for (auto i: {1}){
//        if (i != -99){
//            ++count;
//        }
//        std::cout << i << std::endl;
//    }

    std::cout << std::endl;
    return 0;
}