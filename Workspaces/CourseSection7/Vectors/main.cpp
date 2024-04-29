// Vectors
#include <iostream>
#include <vector>   // use vector package if you want to use vector
// vector and iostream are all the part of C++ standard package (all belong to standard namespace)

int main()
{
//    std::vector <char> vowels;  // declare vector of characters, but didn't declare vector size & initialize
//    std::vector <char> vowels (5); // declare vector of character which its size got 5 (1-D vector), but still didn't initialize
    
    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // vector is an object created from class vector, and its data type of element was char, and its size is 5 so far.
    
    std::cout << vowels[0] << std::endl;
    std::cout << vowels[4] << std::endl;
    
    
//    std::vector <int> test_scores (3);  // 3 elements all initialized to zero if delcare int vector
//    std::vector <int> test_scores (3, 100); // 3 elements all initialized to 100 
    
    std::vector <int> test_scores {100, 98, 89}; // declare element type of vector and initialize
    // Using Array syntax
    std::cout << "\nTest scores using array syntax:" << std::endl;
    std::cout << test_scores[0] << std::endl;
    std::cout << test_scores[1] << std::endl;
    std::cout << test_scores[2] << std::endl;
    // Using Vector syntax
    std::cout << "\nTest scores using vector syntax:" << std::endl;
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    // std::cout << test_scores.at(5) << std::endl; // # Using vector method ".at" can detect the bound
    std::cout << "\nThere are "<< test_scores.size() << " scores in the vector" << std::endl;
    
    std::cout << "Enter 3 test scores: ";
    std::cin >> test_scores.at(0); // Sending values stored from buffer(console) to element in vector 
    std::cin >> test_scores.at(1);
    std::cin >> test_scores.at(2);
    

    std::cout << "\nUpdated test scores: " << std::endl;
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    
    
    // Dynamic nature of vector : can add any element into vector so that size of vector can be change without error
    std::cout << "\nEnter a test score to add to the vector: ";
    
    int score_to_add {0} ; // delcare & initialize variable
    std::cin >> score_to_add; // appoint value to variable
    test_scores.push_back(score_to_add); // push new value to vector's back (or tail)
    
    std::cout << "\nEnter one more test score to add to the vector: ";
    std::cin >> score_to_add;
    test_scores.push_back(score_to_add);
    
    std::cout << "\nTest scores are now: " << std::endl;
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    std::cout << test_scores.at(3) << std::endl;
    std::cout << test_scores.at(4) << std::endl;
    
    std::cout << "\nThere are now " << test_scores.size() << " scores in the vector" << std::endl;
    
    // Exception : Use vector's method "at" will check if index is out of bound of vector
    //    std::cout << "This sould cause an exception!!\n" << test_scores.at(10);
    
    // Example of a 2D-vector
    std::vector <std::vector<int>> movie_ratings // delcare & initilize 2-D vectors = vector of vectors
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };
    
    
    std::cout << "\n Here are the movie rating for reviwer #1 using array syntax :" << std::endl;
    std::cout << movie_ratings[0][0] << std::endl;
    std::cout << movie_ratings[0][1] << std::endl;
    std::cout << movie_ratings[0][2] << std::endl;
    std::cout << movie_ratings[0][3] << std::endl;
    
    
    std::cout << "\n Here are the movie rating for reviwer #1 using vector syntax :" << std::endl;
    std::cout << movie_ratings.at(0).at(0) << std::endl;
    std::cout << movie_ratings.at(0).at(1) << std::endl;
    std::cout << movie_ratings.at(0).at(2) << std::endl;
    std::cout << movie_ratings.at(0).at(3) << std::endl;
    
    return 0;    
}