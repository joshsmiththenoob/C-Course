// Section 11
// Random Numbers
#include <iostream>
#include <cstdlib>  // required for rand()
#include <ctime>    // required for time()
#include <cmath>


int main(){
    
    int random_number {0};
    std::size_t count {10};     // number of random numbers to generate
    int min {1};                // lower bound(inclusive)
    int max {6};                // upper bound (inclusive)
    
    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run
    
    std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
    // time( std::time_t *arg) // get the time for now and store it in the object pointed to by arg, if you don't want to store value, just don't let it point anything -> null pointer
    std::srand(time(nullptr)); // Seeding random number generator -> different time for now = different seeds to seed generator
    
    for (size_t i {0}; i <= count ; ++i){
        random_number = std::rand() % max + min;    //generate a random number between (min, max)
        std::cout << random_number << std::endl;
    }

    std::cout << std::endl;
    return 0;
}