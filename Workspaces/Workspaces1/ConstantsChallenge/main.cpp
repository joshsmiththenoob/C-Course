// Section 6
// Challenge

/*
 Frank's Carpet Cleaning Service
 Charges:
   $25 per small room
   $35 per large room
 Sales tax rate is 6%
 Estimates are valid for 30 days
  
 Prompt the user for the number of small and large rooms they would like cleaned
 and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
===================================================================================
Total estimate: $116.6
THis estimate is valid for 30 days

*/

#include <iostream>

int main()
{
    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << std::endl;
    
    const int price_per_small_room {25};
    const int price_per_large_room {35};
    const double tax_rate {0.06};
    const int expiry_day {30};
    
    
    std::cout << "How many small rooms would you like cleaned?";
    int number_of_small_rooms;
    std::cin >> number_of_small_rooms;
    std::cout << "How many large rooms would you like cleaned?";
    int number_of_large_rooms;
    std::cin >> number_of_large_rooms;
     
    std::cout << "Price per small rooms: $" << price_per_small_room << std::endl;
    std::cout << "Price per large rooms: $" << price_per_large_room << std::endl;
    std::cout << "Cost: $" 
              << (price_per_small_room * number_of_small_rooms) + 
                 (price_per_large_room * number_of_large_rooms) << std::endl;
    std::cout << "Tax: $" 
              << ((price_per_small_room * number_of_small_rooms) + 
                 (price_per_large_room * number_of_large_rooms)) * tax_rate << std::endl;
    std::cout << "==============================================================" << std::endl;
    
    std::cout << "Total estiate: $" 
              << (price_per_small_room * number_of_small_rooms) + 
                 (price_per_large_room * number_of_large_rooms) + 
                 ((price_per_small_room * number_of_small_rooms) + 
                 (price_per_large_room * number_of_large_rooms)) * tax_rate << std::endl;
                 
    std::cout << "This estimate is valid for " 
              << expiry_day 
              << " days"
              << std::endl;
    
    return 0;
}
