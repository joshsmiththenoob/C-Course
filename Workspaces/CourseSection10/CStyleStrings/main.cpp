// Section 10
// CStyleStrings

#include <iostream>
#include <cstring>  // for c-style string functions
#include <cctype>   // for character-based functions

int main(){
    // Create 4 C-style string variables = arrays of char(characters) uninitialized
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};
    
//    std::cout << first_name;     // Will likely display garbage! 
//
//    std:: cout << "Please enter your first name: ";
//    std::cin >> first_name;
//      
//    std::cout << "Please enter your last name: ";
//    std::cin >> last_name;
//    std::cout << "-------------------------------------------" << std::endl;
//    
//    std::cout << "Hello, " << first_name << " your first name has " << std::strlen(first_name) << " characters." << std::endl;
//    std::cout << "and your last name, " << last_name << " has " << std::strlen(last_name) << " characters" << std::endl;
//
//    std::cout << first_name[4] << first_name[5]<< std::endl;;
//    // Build full_name from first_name & last_name
//    std::strcpy(full_name, first_name); // copy first_name to full_name
//    std::strcat(full_name, " ");        // concate full_name & " "(a space)
//    std::strcat(full_name, last_name);  // concate last_name to full_name
    
//    std::cout << "Your full name is " << full_name << std::endl;

    
//    std::cout << "---------------------------------------------" << std::endl;
//    std::cout << "Enter your full name: ";
//    /*
//     * Note: console just extraction info separated by space, 
//     * So if you Enter "Frank Mitropoulous" , the extraction operator just assign "Frank" to full_name variable
//     * the rest of the string "Mitropoulous" will just keep into the consol buffer to assign next variable.
//     * 
//     */
//    std::cin >> full_name; 
//    std::cout << "Your full name is " << full_name << std::endl;
    
    // But How to use console to get full name and assign to char array (C-style String) at once? 
    // Use cin.getline() -> allow conosle to save " "(space) in console buffer to assign to a specific variable
    std::cout << "Enter your full name: ";
    std::cin.getline(full_name, 50); 
    std::cout << "Your full name is " << full_name << std::endl;
    
    
    std::cout << "---------------------------------" << std::endl;
    std::strcpy(temp, full_name);
    // Use std::strcmp(sample1, sample2) to compare difference between sample1 and sample2 char array
    if (std::strcmp(temp, full_name) == 0 )
        // if we got 0 difference -> same C-style strings
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    else
        std::cout << temp << " and " << full_name << " are the different" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    
    std::cout << std::endl;
    
    // Modify C-style string (char array)by char array index
    // we should using size_t datatype to adopt to datatype of strlen(), sizeof() method; size_t would be unsigned int/ unsinged long int which depends on system.
    for (std::size_t i {0}; i < std::strlen(full_name); ++i){
        if(std::isalpha(full_name[i])) // check the if character is lettor or not
            full_name[i] = std::toupper(full_name[i]); // change the letter to uppercase
    }
    std::cout << "Your full name is " << full_name << std::endl;
    \
    
    // Compare the two C-style strings (char arrays) again
    std::cout << "---------------------------------" << std::endl;
    // Use std::strcmp(sample1, sample2) to compare difference between sample1 and sample2 char array
    if (std::strcmp(temp, full_name) == 0 )
        // if we got 0 difference -> same C-style strings
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    else
        std::cout << temp << " and " << full_name << " are the different" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    
    // the difference between two charaacter based on value corresponding to ASCII character set (order)
    std::cout << "Result of comparing " << temp << " and " << full_name << ": " << std::strcmp(temp, full_name) << std::endl;
    std::cout << "Result of comparing " << full_name << " and " << temp << ": " << std::strcmp(full_name, temp) << std::endl;
    
    
    
    return 0;
}