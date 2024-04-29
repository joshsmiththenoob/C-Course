// Section 10
// Challenge Assignment - Letter Pyramid
/*
 Write a C++ program that displays a Letter Pyramid from a user-provided std::string.

 Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

 It's much easier to understand the Letter Pyramid given examples.

 If the user enters the string "ABC", then your program should display:

  A                                                                                                                    
 ABA                                                                                                                   
ABCBA  

 *
If the user enters the string, "12345", then your program should display:

 

    1                                                                                                                  
   121                                                                                                                 
  12321                                                                                                                
 1234321                                                                                                               
123454321
 

If the user enters 'ABCDEFG', then your program should display:

 
      A                                                                                                                
     ABA                                                                                                               
    ABCBA                                                                                                              
   ABCDCBA                                                                                                             
  ABCDEDCBA                                                                                                            
 ABCDEFEDCBA                                                                                                           
ABCDEFGFEDCBA
 */
#include <iostream>
#include <string>

int main(){
    
    std::string prompt{};
    std::cout << "Please give me your prompt string: ";
    std::getline(std::cin, prompt);
    
    // get length of strings
    std::cout << prompt << std::endl;;
    std::cout << "The prompt length is: " << prompt.length() << std::endl;;
    
    // get length of pyramid
    std::size_t pyramid_len {2 * prompt.length() - 1};
    std::cout << "the Pyramid length is: " << pyramid_len << std::endl;
    
    
    for (std::size_t col {0}; col < prompt.length(); ++col){
        // for every layer of pyramid, get how many letters, spaces to enter this layer
        std::size_t num_spaces {prompt.length() - (col +1)};
        std::string letters {prompt.substr(0, col + 1)};
        
        for (std::size_t i {1}; i <= num_spaces ; ++i){
            std::cout << " ";
        }
        for (char c: letters){
            std::cout << c ;
        }
        
        if (letters.length() >= 2){
            for (std::size_t i {letters.length() - 2}; ; --i){
                std::cout << letters[i];
               if (i == 0)
                break;
            }
        }
        
        for (std::size_t i {1}; i <= num_spaces ; ++i){
            std::cout << " ";
        }
        
//        std::cout << num ;

        std::cout << std::endl;
    }
//        std::cout << prompt[i] << std::endl;
    
    std::cout << std::endl;
    return 0;
}

// anothr expertise's method

//#include <iostream>
//#include <string>
//# include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    string user_string{};
//
//    cout << "Enter string" << endl;
//    cin >> user_string;
//
//    // Initialize number of char in white space
//    int number_of_char {};
//    number_of_char = user_string.length();
//    string substring {};
// 
//   for (char c: user_string)
//    {
//        string reverse_substring {};
//        string white_space (number_of_char, ' ');
//
//        reverse_substring = substring;
//        reverse(reverse_substring.begin(), reverse_substring.end());
//        substring = substring + c;
//        cout << white_space.length() << endl;
//        cout << white_space << substring << reverse_substring << endl;
//    }
//
//	return 0;
//}