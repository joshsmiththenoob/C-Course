// Section 11
// Default Arguments
#include <iostream>
#include <iomanip>
#include <string>

/* Declare a function prototype that includes default arguments
 * 
 * It tells the compiler what the function looks like, 
 * what types of arguments it expects, 
 * and which arguments have default values
 */ 
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);


void greeting(std::string name, std::string prefix = "Mr.", std::string suffix = "");

/* Declare and Define the function
 * 
 * Implementation (definition) focuses solely 
 * on the behavior of the function without redefining how it should be called as function prototype does. 
 */ 

double calc_cost(double base_cost, double tax_rate , double shipping ){
    return base_cost += (base_cost * tax_rate) +  shipping;
}


void greeting(std::string name, std::string prefix, std::string suffix){
    std::cout << "\nHello " << prefix + " " + name + " " + suffix << std::endl; // using '+' to concatenate two strings
}



int main(){
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25); // Will NOT use dafaults (100, 8%, 4.25)
    
    std::cout << std::fixed << std::setprecision(2); // set fixed precision digits of double values(floating-point numbers) for output
    std::cout << "\nWill NOT use dafaults" << std::endl;
    std::cout << "Cost is: " << cost << std::endl;
    
    cost = calc_cost(100.0, 0.08); // Will use default argument value for shipping -> (100, 8%, 3.50)
    std::cout << "\nWill use default argument value for shipping" << std::endl;
    std::cout << "Cost is: " << cost << std::endl;
    
    cost = calc_cost(200); // Will use two default argument values for tax_rate, shipping -> (100, 6%, 3.50)
    std::cout << "\nWill use two default argument values for tax_rate, shipping" << std::endl;
    std::cout << "Cost is: " << cost << std::endl;
    
    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D."); 
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");
    std::cout << std::endl;
    return 0;
}
