// Section11
// ScopeExample
#include <iostream>
// function prototype
void local_example(int );
void global_example( );
void static_local_example();

int num {300}; // Global variable - declared outside any class or function(including main function)

// function implementation (definition)
void global_example(){
    std::cout << "\nGlobal num is: " << num << " in global_example - start" << std::endl;
    num *= 2;
    std::cout << "Global num is: " << num << " in global_example - end" << std::endl;
}

void local_example(int x){
    int num {1000};  // local to local_example
    std::cout << "\nLocal num is: " << num << " in local_example - start" << std::endl;
    num = x; // assign statement
    std::cout << "Local num is: " << num << " in local_example - end" << std::endl;
    // num1 in main function is not within scope(local_exmplae function scope) 
    // - so it can't be used here.
}

void static_local_example(){
    /* static variable will stay in memory address between the same function calls until whole program exited.
        static variable was initialized ONLY first time
        after that, it retains its previous value 
     */ 
    static int num {5000}; // local to static_local_example static - retains its value between calls.
    std::cout << "\nLocal static num is: " << num << " in static_local_example - start" << std::endl;
    num += 1000;
    std::cout << "Localstatic num is: " << num << " in static_local_example - end" << std::endl;
}


int main(){
    int num {100}; //Local to main
    int num1 {500}; // Local to main
    
    std::cout << "Local num is : " << num << " in main" << std::endl;
    
    {   // creates a new level of scope from new curly brackets(blocks/ block statements)
        int num {200}; // Local to this inner block
        std::cout << "Local num is: " << num << " in inner block in main" << std::endl;
        std::cout << "Inner block in main can see out - num1 is: "<< num1 << std::endl;
    }
    std::cout << "Local num is : " << num << " in main" << std::endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    static_local_example();
    static_local_example();
    
    
    
    
    std::cout << std::endl;
    return 0;
}