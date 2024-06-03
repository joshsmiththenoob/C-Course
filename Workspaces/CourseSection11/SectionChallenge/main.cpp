// Section 11
// Challenge - Solution
/*
    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refarctoring you solution so that it uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it
          
          
        DO NOT move the vector object outside main and make it a global variable.
        
        
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth.
        
    Take it one function ata time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it tooks the first time you do it!
    
    Finally, don't forget to use function proptotypes!
    
    Good luck -- I know you can do it !!

 */
#include <iostream>
#include <vector>
#include <cctype> 
 
// function prototype
void display_menu();

void convert_selection();

void handle_add(std::vector<int> &);

double get_mean(const std::vector<int> &);
void handle_mean(const std::vector<int> &);

int get_minimum(const std::vector<int> &);
void handle_smallest(const std::vector<int> &);

int get_maximum(const std::vector<int> &);
void handle_largest(const std::vector<int> &);

void display_list(const std::vector<int> &);
void handle_display(const std::vector<int> &);

// function implementation
void display_menu(){
    // Display menu
    std::cout << "----------------------------------" << std::endl;
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - DIsplay the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    
    std::cout << "\nEnter your choice: ";
}


void convert_selection(char &command){
    std::cin >> command;
    command = std::toupper(command);
}
 

void handle_add(std::vector<int> &vec){ //except array, the other data types will pass by value
    int val {0};
    std::cout << "Enter an integer to add to the list: ";
    std::cin >> val;
    vec.push_back(val);
    std::cout << val << " added" << std::endl;
} 

void display_list(const std::vector<int> &v){
    std::cout << "[ ";
    for (auto elem: v)
        std::cout << elem << ' ';
    std::cout << " ]" << std::endl;
}
void handle_display(const std::vector<int> &vec){
    if (vec.empty())
        std::cout << "[] - the list is empty" << std::endl;
    else{
        display_list(vec);
    }
    
}

double get_mean(const std::vector<int> &vec){
    double mean {0};
    for (auto elem: vec)
        mean += elem;
        
    mean /= vec.size();
    
    return mean;
}
void handle_mean(const std::vector<int> &vec){
    if (vec.empty())
        std::cout << "Unable to calculate the mean - no data" << std::endl;
    else{
        double mean{get_mean(vec)};
        std::cout << "the mean of the list is: " << mean << std::endl;
        }
}
 
 
int get_minimum(const std::vector<int> &vec){
    int min {0};
    for (auto num: vec)
        if (num < min)
            min = num;
    return min;
} 
void handle_smallest(const std::vector<int> &vec){
    if (vec.empty())
        std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
    else{
        int min {0};
        // Method I: Comparing every element to get minimum
        min = get_minimum(vec);
        // Method II: Using pointer to get the memorey address of min_element(vec.begin(), vec.end())
        // min = *std::min_element(vec.begin(), vec.end());
        std::cout << "The smallest number is " << min << std::endl;
        }
} 


int get_maximum(const std::vector<int> &vec){
    int max {0};
    for (auto num: vec)
        if (num > max)
            max = num;
    return max;
} 
void handle_largest(const std::vector<int> &vec){
    if (vec.empty())
        std::cout << "Unable to determine the largest number - list is empty" << std::endl;
    else{
        int max {0};
        // Method I: Comparing every element to get maximum
        max = get_maximum(vec);
        // Method II: Using Pointer to get value of address the variable(result) of max_element method has 
        // max = *std::max_element(vec.begin(), vec.end());
        std::cout << "The largest number is " << max << std::endl;
    }
}

int main(){
    std::vector<int> vec {};
    char command {' '};
    std::cout << "Checking..." << std::endl;
    do {
        // Display menu
        display_menu();
        convert_selection(command);
        std::cout << "Now the Selection is: " << command << std::endl;
        std::cout << std::endl;
        
        if (command == 'Q'){
            std::cout << "Goodbye!" << std::endl;
        } else if(command == 'A'){
            handle_add(vec);
        } else if (command == 'P'){
            handle_display(vec);
        } else if(command == 'M'){
            handle_mean(vec);
        } else if(command == 'S'){
            handle_smallest(vec);
        } else if (command == 'L'){
            handle_largest(vec);
        } else{
            std::cout << "Unknown selection, please try again!" << std::endl;
        }
    } while (command != 'Q');
    
    
    
    
    std::cout << std::endl;
    return 0;
} 

