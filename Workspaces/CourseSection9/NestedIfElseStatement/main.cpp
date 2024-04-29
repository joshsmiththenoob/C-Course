// Section 9
// Nested if else statements
#include <iostream>

/* Requirement:
 * 1. Check if the score user entered is valid (in range of 0 - 100)
 * 2. return user which grade he/she got based on his/her score.
 */
 
/* Presudo Code:
 * 
 *
 * 
 * */
int main(){
    
    int score {};
    std::cout << "Enter your score on the exam (0 - 100) : ";
    std::cin >> score;
    
    char letter_grade {}; //delcare character letter_grade which is initalized to 0 (or empty character)

    // Validate score
    if (score <= 100 || score >= 0){
        std::cout << score <<  std::endl;
        if (score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
    
        std::cout << "Your grade is : " << letter_grade << std::endl;
        
        if (letter_grade == 'F')
            std::cout << "Man! You must repeat the class!" << std::endl;
        else
            std::cout << "Okay Kid! You Pass the exam!! Congrats! " << std::endl;
            
            
    } else {
        std::cout << "Sorry, " << score << " is out of range. Try valid score in range of 0 - 100" << std::endl;
    }
    
    
    //    if (score < 0 || score > 100){
//        std::cout << "Sorry, " << score << " is out of range. Try valid score in range of 0 - 100" << std::endl;
//    } else{
//        if (score > 90)
//            letter_grade = 'A';
//        else if (score > 80)
//            letter_grade = 'B';
//        else if (score > 70)
//            letter_grade = 'C';
//        else if (score > 60)
//            letter_grade = 'D';
//        else
//            letter_grade = 'F';
//    
//        std::cout << "Your grade is : " << letter_grade << std::endl;
//        
//        if (letter_grade == 'F')
//            std::cout << "Man! You need to come back class next year!" << std::endl;

    
    return 0;
}