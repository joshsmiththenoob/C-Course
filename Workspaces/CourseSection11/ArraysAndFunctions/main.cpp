// Section 11
// Arrays and functions
// the fucntions copy array variable = memory address of first element of array
// !! So the functions acutally change the actual parameter value (augument) of element in array!!
// Not the same as the change the copy value of actual parameter value of only int, double, char etc... -> didn't chnage actual paraveter value (argument)
#include <iostream>


// function prototype: How argument , dafult argument value the function take
void print_array(const int [], size_t);
void set_array(int [], size_t, int);


// function implmentation (definition): How function works on parameter(copy of arguments)
// print each array element ( element should not be set ideally -> constant)
void print_array(const int arr[], size_t size){ // set array if parameter to const that there's no behavior of changing value on array
    for (size_t i {0}; i < size ; ++i){
        std::cout << arr[i] << " ";
    }   

    std::cout << std::endl;
//    arr[0] = 50000;  // bug
}

// set each array element to value
void set_array(int arr[], size_t size, int value){
    for (size_t i {0}; i < size; ++i){
        arr[i] = value;
    }
}


// main function
int main(){
    int my_score[] {100, 98, 90, 86, 84};
    
    print_array(my_score, 5);
    set_array(my_score, 5, 100);
    print_array(my_score, 5); 
    print_array(my_score, 5); 
    
    std::cout << std::endl;
    return 0;
}