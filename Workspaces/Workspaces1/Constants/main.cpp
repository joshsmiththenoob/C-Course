// Section 6
// Constants

/*
  Frank's Carpet Cleaning Service
  Charges $30 per room
  Sales tax rate is 6%
  Estimates are valid for 30days
  
  Prompt the user for the number of rooms they would like cleaned
  and provide an estimate such as:

Estimate for capet cleaning service:
Number of rooms :2 <- the value prvided by User
Price per room : $30
Cost: $60
Tax: $3.6 dollars = $60 * 0.06 (= Cost * tax rate)
==============================================================
Total estimate: Cost + Tax = $60 + $3.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room [price/room]
    
    Display cost : (number of rooms * price/room)
    Display tax : cost * tax rate
    Display total estimate : cost + tax
    Display estimate expiration time
*/ 

#include <iostream>

int main()
{
    std::cout << "Hello, welcom to Frank's Carpet Cleaning Service \n" << std::endl; // using literal constant \n to create a new line 
    std::cout << "How many rooms would you like cleaned?";
    
    int number_of_rooms {0};
    std::cin >> number_of_rooms;
    
    const double price_per_room {32.5}; // declare constant which is read-only
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    
    
    std::cout<< "\n Estiate for carpet cleaning service" << std::endl;
    std::cout << "Number of Room : " << number_of_rooms << std::endl;
    std::cout << "Price per Room : $" << price_per_room << std::endl;
    std::cout << "Cost : $" << number_of_rooms * price_per_room << std::endl;
    std::cout << "Tax : $" << number_of_rooms * price_per_room * sales_tax << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "Total estimate: $" << (number_of_rooms* price_per_room) + (number_of_rooms* price_per_room * sales_tax) << std::endl;
    std::cout << "This estimate is valid for " << estimate_expiry << "days" << std::endl;
    
    
    return 0;
}