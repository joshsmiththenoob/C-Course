#include <iostream>
#include <string>
#include <vector>

// funcion prototype
void display(const std::vector<std::string> *const );// *const: the pointer can not pointing anywhere If we initialize it,  const datatype: the dereference of pointer pointing to couldn't not change in the function
void display(const int *);// we can let the dereference of int be constant, but if we keep changing the pointer value, we can't have constant pointer in function


// function implementation (definition)
// Using function overloading to get different function with same name
void display(const std::vector<std::string> *const v){ // functions need pointer =  address that function can copy and assign them to local function variable *v (pointer v)
    for (auto str: *v){ // because vector is an object -> the info of object stored in address need to be dereferenced 
        std::cout << str << std::endl;
    }
    std::cout << std::endl;
    
//    (*v)[0] = "Funny";
//    v = nullptr;
}

void display(const int *array, int sentinel){
    while (*array != sentinel){ // dereference of pointer is the value of what it pointer in array
        std::cout << *array++ << std::endl; // using "a++" operator -> *array : we first diplay the dereferencing value of  pointer pointing to -> array++: and add address of pointer at the last
    }
}

int main(){
    std::cout << "-----------------------------------------------" << std::endl;
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    std::cout << stooges[0] << std::endl;

    std::cout << "\n-----------------------------------------------" << std::endl;
    int scores [] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    return 0;
}