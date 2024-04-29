#include <iostream>


// This program will calculate the area of a room in square feet
int main()
{
    
    std::cout << "Enter the width of the room: ";
    int room_width;
    std::cin >> room_width; // give the value == initializing
    
    std::cout << "And Please Enter the length of the room :";
    int room_length;
    std::cin >> room_length;
    
    std::cout << "The area of the room is " << room_width * room_length << " square feet" << std::endl;
    
    return 0;
}


//int age;  // uninitialized
//int age = 21; // C-like initialization -> 正常指定變數一個
//int age (21); // Constructor initialization -> 與OOP有關
//int age {21}; // C++11 list initialization syntax -> C++ 命名方式(任一Compiler適用) ， 有其優點 -> Frank老師最推薦 (因為Compiler 會幫忙檢查資料型態是否正確)!