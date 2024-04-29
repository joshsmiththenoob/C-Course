// Section 8
/*
 * Increment operator ++
 * Derement operator --
 * 
 * Increments or decrements its operand by 1
 * Can be used with intergers, floating point types and pointers
 * 
 * Prefix : ++num
 * Postfix:   num++
 * 
 * DO NOT overuser this operator!
 * ALERT!!! Never use it twice for the same variable in the same statement!!
 */
 
 #include <iostream>
 
 int main()
 {
    
    int counter {10};
    int result {0};
    
    // Example 1 - simple increment
//    std::cout << "Counter : " << counter << std::endl;
//    
//    
//    counter = counter + 1;
//    std::cout << "Counter : " << counter << std::endl;
//    
//    counter++;
//    std::cout << "Counter : " << counter << std::endl;
//    
//    ++counter;
//    std::cout << "Counter : " << counter << std::endl;
//    

    // Example 2 - preincrement
//    counter = 10;
//    result = 0;
//    
//    std::cout << "Counter : " << counter << std::endl;
//    
//    result = ++counter ; // Note the preincrement : ++counter : add counter by 1 before using counter to assignment its value to result
//     //that is : result = ++counter : 1. counter = counter + 1 2. result = counter
//    std::cout << "Counter : " << counter << std::endl;
//    std::cout << "Result : " << result << std::endl;
    
    
    // Example 3 - post-increment
//    counter = 10;
//    result = 0;
//    
//    std::cout << "Counter : " << counter << std::endl;
//    
//    result = counter++ ; // Note the post-increment : counter++ : add counter by 1 after using counter to assignment its value to result
//    // that is : result = counter ++ : 1. result = counter 2. counter = counter +1
//    std::cout << "Counter : " << counter << std::endl;
//    std::cout << "Result : " << result << std::endl;
//    
    
    // Example 4
//    counter = 10;
//    result = 0;
//    
//    std::cout << "Counter : " << counter << std::endl;
//    
//    result = ++counter + 10; // Note the pre increment : counter is incremented by 1 in prior, and then assign counter's value and plus 10 to result 
//    // ++counter : increment counter before we use counter
//    std::cout << "Counter : " << counter << std::endl;
//    std::cout << "Result : " << result <<std::endl;s
    
    
    // Example 5
    counter = 10;
    result = 0;
    
    std::cout << "Counter : " << counter << std::endl;
    
    result = counter++ + 10; // Note the post increment
    // counter++ : increment counter after we use counter
    std::cout << "Counter : " << counter << std::endl;
    std::cout << "Result : " << result <<std::endl;
    
    return 0;
    
     
}