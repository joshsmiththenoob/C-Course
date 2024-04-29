# include <iostream>

int main()
{

    // Compare two integers : int
    // You can delcare same data type variables as below: int num1{32}, num2{20}
//    int num1{}, num2{}; // Declare variable on integer type, initialize variable with empty {} = value 0 (variable{} = variable{0})
    
    std::cout << std::boolalpha;  // Will disply true/false instead of 1/0 for bolleans
    
//    std::cout << num1 << num2;
//    std::cout << "Enter two integers separated by a space: ";
//    std::cin >> num1 >> num2;
//    bool equal_result{false}; // Declare variable equal_result which data type is Bool, and Initialize it to false 
//    equal_result = (num1 == num2);
//    bool not_equal_result{false};
//    not_equal_result = (num1 != num2);
//    std::cout << "Comparison result (equals) :" <<  equal_result << std::endl;
//    std::cout << "Comparsion result (not equals) :" << not_equal_result << std::endl;

    
    // Compare two characters : char
    // as same as above, you can delcare same data type variables at the same time.
//    char char1{}, char2{}; // initialize to empty =  character ''
//    std::cout << char1 << char2;
//    std::cout << "Enter two characters separated by a space: ";
//    std::cin >> char1 >> char2;
//    bool equal_result{false};
//    equal_result = (char1 == char2);
//    bool not_equal_result{false};
//    not_equal_result = (char1 != char2);
//    std::cout << "Comparison result (equals) : " << equal_result << std::endl;
//    std::cout << "Comparison result (not equals) : " << not_equal_result << std::endl;
    
    
    // Compare two doubles : double
//    double double1{}, double2{}; // initialize to empty =  character ''
//    // If double 12.99999999999, It will be rounded to 13 : double 12.999999 ~ 3, because of size of double was 12.9999, so that it will be rounded and stroed in approximation.
//    // If you're dealing with applications that need this critial precision, you would NOT use built-in doubles. Instead, we would use specific specialized libraries
//    std::cout << "Enter two doubles separated by a space: ";
//    std::cin >> double1 >> double2; 
//    bool equal_result{false};
//    equal_result = (double1 == double2);
//    bool not_equal_result{false};
//    not_equal_result = (double1 != double2);
//    std::cout << "Comparison result (equals) : " << equal_result << std::endl;
//    std::cout << "Comparison result (not equals) : " << not_equal_result << std::endl;
//    
    
    
    // Compare Integer and double: int & double
    int num1{};
    double double2{}; // initialize to empty =  character ''
    
    
    // If double 12.99999999999, It will be rounded to 13 : double 12.999999 ~ 3, because of size of double was 12.9999, so that it will be rounded and stroed in approximation.
    // If you're dealing with applications that need this critial precision, you would NOT use built-in doubles. Instead, we would use specific specialized libraries
    std::cout << "Enter an ineger and a double separated by a space: ";
    std::cin >> num1 >> double2; 
    std::cout << "Num1 is : " << num1 << " ; and double2 is : " << double2 << std::endl;
    bool equal_result{false};
    // Mixed Type Expression: there's type conversion if operator got different types of variables, ex: int will be converted to double to compare another double variable
    equal_result = (num1 == double2);
    bool not_equal_result{false};
    not_equal_result = (num1 != double2);
    std::cout << "Comparison result (equals) : " << equal_result << std::endl;
    std::cout << "Comparison result (not equals) : " << not_equal_result << std::endl;
    
    return 0;
}