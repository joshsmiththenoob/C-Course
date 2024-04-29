// Arrays 

/*
 How to Declare and Initialize array?
ex : type arrays_name [size_of_array] {values used to initilize array} 
1.   char vowels[] {'a','e','i','o','u'}
 */
#include <iostream>

int main()
{
    char vowels[]  {'a', 'e', 'i', 'o', 'u'};
    std::cout << "\nThe first vowel is: " << vowels[0] << std::endl;
    std::cout << "The last vowel is: " << vowels[4] << std::endl;
    
    std::cin >> vowels[5]; //out of bounds - don't do this !!
    std::cout <<"And the last vowel is: " << vowels[5] << std::endl;
    
    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    std::cout << "\nThe first high temperature is: " << hi_temps[0] << std::endl;
    hi_temps[0] = 100.7;
    
    std::cout << "The first high temperature is now: " << hi_temps[0] << std::endl;


    int test_scores [5] {}; //declare & initialized all 0 elements in array 
    std::cout << "\nFirst score at index 0: " << test_scores[0] << std::endl;
    std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
    std::cout << "Thirds score at index 2: " << test_scores[2] << std::endl;
    std::cout << "Fourth score at index 3: " << test_scores[3] << std::endl;
    std::cout << "Fifth score at index 4: " << test_scores[4] << std::endl;
    
    
    // Reading integer elements from the console and replace every element in array
    std::cin >> test_scores[0];
    std::cin >> test_scores[1];
    std::cin >> test_scores[2];
    std::cin >> test_scores[3];
    std::cin >> test_scores[4];
    
    std::cout << "\nThe updated array is:" << std::endl;
    std::cout << "First score at index 0: " << test_scores[0] << std::endl;
    std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
    std::cout << "Thirds score at index 2: " << test_scores[2] << std::endl;
    std::cout << "Fourth score at index 3: " << test_scores[3] << std::endl;
    std::cout << "Fifth score at index 4: " << test_scores[4] << std::endl;
    std::cout << "Fifth score at index 5 (out of bound): " << test_scores[5] << std::endl;
    
    
    std::cout << "\nNotice what the value(memory address or location) of the array name is: " << test_scores << std::endl;
    
    
    return 0;
}

