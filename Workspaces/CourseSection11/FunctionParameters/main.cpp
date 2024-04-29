// Section 11
// Function Parameters
/* The augument value passed by main function into local function is copied to another memory location
 * so that the local function will process the new value of another memory location
 * the variable, value of main function is NOT changed!
 */
#include <iostream>
#include <string>
#include <vector>

// front declare function which user pass in parameters by value
void pass_by_vale1(int num);
void pass_by_value2(std::string s);
void pass_by_value3(std::vector<std::string> v);
void print_vector(std::vector<std::string> v);

void pass_by_value1(int num){
    num = 1000;
}

void pass_by_value2(std::string s){
    s = "Changed";
}

void pass_by_value3(std::vector<std::string> v){
    v.clear(); // Delete all vector elements
}

void print_vector(std::vector<std::string> v){
    for (auto s: v)
        std::cout << s << " ";
    std::cout << std::endl;
}




int main(){
    int num {10};
    int another_num {20};
    
    std::cout << "num before calling pass_by_value1: " << num << std::endl;
    pass_by_value1(num);// the function was changing the coppy, not the actual value (argument) 
    std::cout << "num after   calling pass_by_value1: " << num << std::endl;
    
        std::cout << "\nanother_num before calling pass_by_value1: " << another_num << std::endl;
    pass_by_value1(another_num);// the function was changing the copy (formal parameter), not the actual value (argument) 
    std::cout << "another_num after calling pass_by_value1: " << another_num << std::endl;
    
    /* Its no different when you use objects to functions, the function still change the copy of boject we pass
    * and the local object in main was still not changed
    */
    std::string name {"Frank Mitropoulos"};
    std::cout << "\nname before calling pass_by_value2: " << name << std::endl;
    pass_by_value2(name);
    std::cout << "\nname after calling pass_by_value2: " << name << std::endl;

    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    std::cout <<  "\nstooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    std::cout << std::endl;
    return 0;
}

