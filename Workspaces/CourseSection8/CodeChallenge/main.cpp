#include <iostream>
// Section 8 CodeChallenge
/* Write a program that displays how much change it should provide to the user.
 * 
 * In the US:
 *   1 dollar = 100 cents
 *   1 qurater = 25 cents
 *   1 dime = 10 cents
 *   1 nickel = 5 cents
 *   1 penny = 1 cents
 * 
 * Pseudo Code:
 * 1. Set & Limit an integer's range the user enter ex : cents > 0 
 * 2. Ask the user to enter an integer that representing the number of cents
 * 3. Check if the user enter the right value in the range we set.
 * 4. Calculate how much change we should provide to the user
 * 5. Print out the change we sould provide to the user.
 * 
 * */
int main(){
    int cents{}; // declare integer to variable:cents and Initialize it to 0 = {};
    std::cout << "Please Enter How much cents you have: " ;
    std::cin >> cents;
    
    // Calculate how much change we should provide to the user;
    // declare currency of change 
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    
    // declare any change we should take to provide to the user
    int balance{};
    int dollar_change{};
    dollar_change = cents / dollar;
    balance = cents % dollar;
    int quarter_change{};
    quarter_change = balance / quarter;
    balance %= quarter;
    int dime_change{};
    dime_change = balance / dime;
    balance %= dime;
    int nickel_change{};
    nickel_change = balance / nickel;
    balance %= nickel;
    int penny_change{};
    penny_change = balance;
    
    // Output How much change we should provide to the user;
    std::cout << "the change you get will be:" << std::endl;
    std::cout << "dollar: " << dollar_change << std::endl;
    std::cout << "quarter: " << quarter_change << std::endl;
    std::cout << "dime: " << dime_change << std::endl;
    std::cout << "nickel: " << nickel_change << std::endl;
    std::cout << "penny: " << penny_change << std::endl;
    std::cout << "for your " << cents << " cents." << std::endl;
    
    
    return 0;
}