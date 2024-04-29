// Section 6
// Primitive Types

#include <iostream>

int main()
{
    /***************************************
     * Character Type
     **************************************/
     char middle_initial {'J'};  // Notice the single quotes when using "character", and double quotes for "string"
     std::cout << "My middle inital is " << middle_initial << std::endl;
     
     
     /***************************************
     * Character Type
     **************************************/
     unsigned short int exam_score {55}; // same as unsigned short exam_short {55}
     std::cout << "My exam score was " << exam_score << std::endl;
     
     
     int countires_represented {65};
     std::cout << "There were " << countires_represented << " countries represented in my meeting" << std::endl;
     
     
     long people_in_florida {20610000};
     std::cout << "There are about " << people_in_florida << " people in Florida" << std::endl;
     
     
     long long people_on_earth {7'600'000'000}; // curl parathesis {}(list initialization will cath data type problem exactly!
     std::cout << "There are about " << people_on_earth << " people on earth" << std::endl;
     
     
     long long distance_to_alpha_centauri {9'461'000'000'000};
     std::cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << std::endl;
     
     
    /***************************************
     * Floating point Type
     **************************************/
     
     float car_payment {401.23};
     std::cout << "My car payment is " << car_payment << std::endl;
     
     
     double pi {3.14159};
     std::cout << "Pi is " << pi << std::endl;
     
     
     long double large_amount {2.7e120}; // double got large real number by e (ex : e^2 = 10^2 = 100)
     std::cout << large_amount << " is a very big number" << std::endl;
     
     
    /***************************************
     * Boolean type
     **************************************/
     bool game_over {false}; // false has no captialized in first letter in word (false != False)
     std::cout << "THe value of game_over is " << game_over << std::endl;  // It will prints 0(= false) on console in C++
     
     
     
    /***************************************
     * Overflow example (Incorrected example)
     **************************************/
     short value1 {30000};   // short = short int
     short value2 {1000};
     int product {value1 * value2};
     std::cout << "The sum of " << value1 << " and " << value2 << " is " << product;
     
     
     
     return 0;
}