// Section 9
// Switch Statement

/*
 * Ask the user what grade they expect on an exam and
 * tell them what they need to schore to get it.
*/
 
#include <iostream>

int main(){
    
    char letter_grade {};
    
    std::cout << "Enter the letter grade you expect on the exam: ";
    std::cin >> letter_grade;
    
    
    switch (letter_grade){
        case 'a':
        case 'A':
            std::cout << "You need a 90 or abouve, study hard!" << std::endl;
            break;
        case 'b':
        case 'B':
            std::cout << "You need 80-90 for a B, go study!" << std::endl;
            break;
        case 'c':
        case 'X':
            std::cout << "You need 70-80 for an average grade." << std::endl;
            break;
        case 'd':
        case 'D':
            std::cout << "Hmm, you should strive for a better grade. All you need is 60-69" << std::endl;
            break;
        case 'f':
        case 'F':
        // if you want to declare variable in switch statement, -> using block statement. However, it's no need to get blcok when multiple statements are in case.
        {
            char confirm{};
            std::cout << "Are you sure (Y/N)? ";
            std::cin >> confirm;
            if (confirm == 'y' || confirm == 'Y'){
                std::cout << "OK, I guess you didn't study..."  << std::endl;
            } else if (confirm == 'n' || confirm == 'N'){
                std::cout << "Good, go study!" << std::endl;
            } else{
                std::cout << "illegal choice" << std::endl;
            }
            break;
        }
        default:
            std::cout << "Sorry, that's not your grade" << std::endl;

    }
    
    return 0;
} 
