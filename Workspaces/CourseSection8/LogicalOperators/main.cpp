// Section 8
// Logical Operators

#include <iostream>

int main()
{
//    int num {};
//    const int lower {10};
//    const int upper {20};
    
    std::cout << std::boolalpha; // Show true/false instead of 1/0
    
    // Determine if an entered integer is between two other integers
    // assume lower < upper
//    std::cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//    std::cin >> num;
//    
//    
//    bool within_bounds {false};
//    within_bounds = (num > lower && num < upper);
//    std::cout << "If num is in bounds? : " << within_bounds << std::endl;
    
    
    
    // Determine if an entered is outside two other integers
    // assume lower < upper
//    std::cout << "\nENter an integer - the bounds are " << lower << " and " << upper << " : ";
//    std::cin >> num;
//    
//    bool outside_bounds {false};
//    outside_bounds = (num < lower || num > upper);
//    std::cout << "If num is out of  bounds? : " << outside_bounds << std::endl;
    
    
    // Determine if an entered integer is exactly on the boundary
//    std::cout << "\nENter an integer - the bounds are " << lower << " and " << upper << " : ";
//    std::cin >> num;
//
//    bool on_the_bounds {false};
//    on_the_bounds = ( num == lower || num == upper);
//    std::cout << "If num is on the bounds? : " << on_the_bounds << std::endl;
    
    
    
    
    // Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    const double temperature_for_coat {25}; // temperature below this value requires a coat
    const int wind_speed_for_coat {45}; // wind over this value requires a coat
    
    // Require a coat if either wind is too high OR temperature is too low
    std::cout << "\nEnter the current temperature in [F] : ";
    std::cin >> temperature ;
    std::cout << "\nEnter the wind speed in [mph] : ";
    std::cin >> wind_speed ;
    
    wear_coat = ( temperature < temperature_for_coat || wind_speed > wind_speed_for_coat );
    std::cout << "Do we need to wear a coat using OR based on the weather today? : " << wear_coat;
    
    
    // Require a coat it BOTH the windspeed is too high AND temperature is too low
    wear_coat = ( temperature < temperature_for_coat && wind_speed > wind_speed_for_coat );
    std::cout << "\nDo we need to wear a coat using AND based on the weather today? : " << wear_coat;
    
    
    return 0;
}