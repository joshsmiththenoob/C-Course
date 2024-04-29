// Section 10
// C++ Strings
// Note: C++ strings is a "class"
#include <iostream>
#include <iomanip>
#include <string> // import C++ string class



int main(){
    
    // create C++ strings = C++ string object from C++ string class
    std::string s0; // declare & initialize string "object"!
    std::string s1 {"Apple"};
    std::string s2 {"Banana"};
    std::string s3 {"Kiwi"};
    std::string s4 {"apple"};
    std::string s5 {s1}; // Deep copy from s1 to another memory address binding variable s5
    std::string s6 {s1, 0, 3}; // App : get 3 characters which begin from index 0 of string "Apple"
    std::string s7 (10, 'X');  // XXXXXXXXXX : get 10 'X' character; Note: use Parentheses"()", NOT curly brackets"{}"
    
//    std::cout << s0 << std::endl; // No garbage = empty string
//    std::cout << s0.length() << std::endl; // empty string: length = 0

      // Initialization 
//      std::cout << "\nInitialization" << "\n-----------------------------------------" << std::endl;
//      std::cout << "s1 is initialized to " << s1 << std::endl;
//      std::cout << "s2 is initialized to " << s2 << std::endl;
//      std::cout << "s3 is initialized to " << s3 << std::endl;
//      std::cout << "s4 is initialized to " << s4 << std::endl;
//      std::cout << "s5 is initialized to " << s5 << std::endl;
//      std::cout << "s6 is initialized to " << s6 << std::endl;
//      std::cout << "s7 is initialized to " << s7 << std::endl;
      
    // Comparsion for C++ Strings
    // Note: If you want to compare C-Style strings -> using std::strcmp() function
//    std::cout << "\nComparsion" << "\n-----------------------------------------" << std::endl;
//    std::cout << std::boolalpha; // from <iomanip>: io manipulator -> show boolean true/false on console (NOT 1/0)
//    std::cout << s1 << " == " << s5 << ": " << (s1 == s5) << std::endl;
//    std::cout << s1 << " == " << s2 << ": " << (s1 == s2) << std::endl;
//    std::cout << s1 << " != " << s2 << ": " << (s1 != s2) << std::endl;
//    std::cout << s1 << " < " << s2 << ": " << (s1 < s2) << std::endl; // first letter, capital A of "Apple" comes before first letter, capital B of "Banana" 
//    std::cout << s2 << " > " << s1 << ": " << (s2 > s1) << std::endl;
//    std::cout << s4 << " < " << s5 << ": " << (s4 < s5) << std::endl; // uppercase character "A" comes before lowercase character "a"
//    std::cout << s1 << " > " << "Apple" << ": " << (s1 == "Apple") << std::endl; // C++ string vs C-style string -> compiler will convert C-style string to C++ string automatically for comparison

    // Assignment to same value of variable = Deep Copy
    // Note: using std::strcpy() function to do same thing for C-Style string = Deep Copy
//    std::cout << "\nAssignment" << "\n-----------------------------------------" << std::endl;
//    
//    s1 = "Watermelon"; // overwritten object of std::string with "Watermelon" 
//    std::cout << "s1 is now: " << s1 << std::endl; // Watermelon
//    s2 = s1; // Deep Copy value of object s1 to another object s2 with different memory address -> Not pointing the same memory address 
//    std::cout << "s2 is now: " << s2 << std::endl; // Watermelon
//    
//    s3 = "Frank";
//    std::cout << "s3 is now: " << s3 << std::endl; // Frank
//    
//    s3[0] = 'C'; // changing first character (index =0 ) to 'C' -> Crank
//    std::cout << "s3 change first letter to 'C': " << s3 << std::endl; // Crank
//    s3.at(0) = 'P'; // Prank
//    std::cout << "s3 change first letter to 'P': " << s3 << std::endl; // Crank


//    // Concatenation with arithmatic plus opermator '+'
//    // Note: using std::strcat() function to do same thing for C-Sty string concatenation
//    s3 = "Watermelon";
//    std::cout << "\nConcatenation" << "\n-----------------------------------------" << std::endl;
//    
//    // convert C-style string automatically when using '+' between C++ string object and C-style string literal
//    s3 = s5 + " and " + s2 + " juice";    // Apple and Banana juice; '+' works with C++ string objects
//    std::cout << "s3 is now: " << s3 << std::endl;  // Apple and Banana Juice
//    
////    s3 = "nice " + " cold" + s5 + "juice";  // Compiler Error while you're using C++ strig concatenation between two C-style strings literal
    
    
//    // for loop
//    std::cout << "\nLooping" << "\n-----------------------------------------" << std::endl;
//    
//    s1 = "Apple";
//    for (size_t i {0}; i < s1.length(); ++i)  // data type of i is size_t to adapt for data type of s1.length() method
//        std::cout << s1[i];   // or s1.at(i) : at(i) method has the ability of bound checking ability
//    std::cout << std::endl;
//    
//    // range-based for loop
//    for (char c: s1)
//        std::cout << c;
//    std::cout << std::endl;

    
//    // Substring
//    std::cout << "\nSubstring" << "\n-----------------------------------------" << std::endl;
//    s1 = "This is a test";
//    
//    
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(0, 4) << std::endl; // This : starting at index 0, and get 4 characters
//    std::cout << s1.substr(5, 2) << std::endl; // is
//    std::cout << s1.substr(10, 4) << std::endl; // test 
//    
    
//    // Erase
//    std::cout << "\nErase" << "\n-----------------------------------------" << std::endl;
//    
//    s1 = "THis is a test";
//    s1.erase(0, 5);  // Erase This from s1 so that it results in "is a test": erasing start at index 0, and erase 5 characters
//    std::cout << "s1 is now: " << s1 << std::endl; 
//    


//    // getline on C++ strings: It's dynamic length controlling like vector
//    // Note: IT's DIFFERENT from getline method from C-style strings: std::cin.getline(dest, length)
//    std::string full_name {};
//    
//    std::cout << "Enter your full name: ";
//    std::getline(std::cin, full_name); // the result including space until it meets \n
//    
//    std::cout << "Your full name is: " << full_name << std::endl;
    
    
    // Find
//    std::cout << "\nfind" << "\n-----------------------------------------" << std::endl;
//
//    s1 = "The secret word is Boo";
//    std::string word {};
//    
//    std::cout << "Enter the wrod to find: ";
//    std::cin >> word;
//    
//    std::size_t position = s1.find(word); // let s1 object find the word the user prompt and return the index start at the first letter of word
//    
//    if (position != std::string::npos) // return the index we find first.
//        std::cout << "Found " << word << " at position: " << position << std::endl;
//    else
//        std::cout << "Sorry, " << word << " not found" << std::endl;
//    
//    std::cout << std::endl;

    // Insert
    std::cout << "\nInsert" << "\n-----------------------------------------" << std::endl;
    s1.insert(0, 1, 'H');
    std::cout << s1 << std::endl;
      
      
    // Swap: change the content of string objects each other -> changing pointer    
    std::cout << "\nSwap" << "\n-----------------------------------------" << std::endl;
    s1.swap(s4);
    std::cout << "after swap, the s1, s4 are: " << s1 << " , " << s4 << std::endl;
    
    return 0;
}