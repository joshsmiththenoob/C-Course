// Section 9
// NestedIfELseStatementTwo

/* Shipping cost caluclator
*  
* Ask the user for package dimension in inches
* length, width, height - these should be integers
* 
* All dimension must be 10 inches or less or we cannot ship it
* 
* Base cost $2.50
* If package volume is greater than 100 cubic inches there is a 10% surcharge
* If package volume is greater than 500 cubic inches there is a 25% surcharge
*  
*/

\fd\#include <iostream>
#include <iomanip>

int main(){
    int length{}, width{}, height{};
    double base_cost{2.5};
    
    const int tier1_threshold {100}; // volume threshold1
    const int tier2_threshold {500}; // volume threshold2
    const double tier1_surcharge_factor {0.1};
    const double tier2_surcharge_factor {0.25};
    const int max_dimension_length {10}; // inches -> All dimension must be 10 inches or less
    
    
    int package_volume{};
    
    std::cout << " Please Enter your package length, width and height separated by blank(space) : " ;
    std::cin >> length >> width >> height;
    std::cout << " The Package's dimension is : " << length << " x " << width << " x " << height << " cubic inches." << std::endl;
    
    // Validate package dimension length
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
        // if length exceed: do nothing
        std::cout << "Sorry, Your package was large! the max dimension length is : " << max_dimension_length << std::endl;
    } else{
        // else: calculate charge
        package_volume = length * width * height;
        std::cout << " The package's volume is : " << package_volume << std::endl;
        std::cout << " Basic Cost: $" << base_cost << std::endl;
        
        // Calculate shipping payment
        double payment{};
        payment = base_cost;
        if (package_volume > tier2_threshold){
            payment += payment * tier2_surcharge_factor;
            std::cout << " Adding tier2 surcharge.... " << std::endl;
        } else if (package_volume > tier1_threshold){
            payment += payment * tier1_surcharge_factor;
            std::cout << " Adding tier1 surcharge.... " << std::endl;
        }
        
        std::cout << std::fixed << std::setprecision(2); // prints dollars nicely
        std::cout << " Your package shipping payment is: $" << payment;
    }
    
    
    
    
    
    return 0;
} 