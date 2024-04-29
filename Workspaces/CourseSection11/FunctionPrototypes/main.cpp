// Section 11
// Function Prototypes
// Area of a Circle and Volume of a Cylinder

#include <iostream>
// Function Prototypes
double cal_volume_cylinder(double radius, double height);
// Compiler just need to know data type of function's parameters, don't care variable name
double calc_area_circle(double); // YOu can define functions prototypes only with data type, variable name is optional for function prototypes
void area_circle();
void volume_cylinder();

const double pi {3.14159};

int main(){
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    std::cout << std::endl;
    
    return 0;
}




double cal_volume_cylinder(double radius, double height){
    return calc_area_circle(radius) * height;
}


double calc_area_circle(double radius){
    return pi * radius * radius;
}


void area_circle(){ // Return nothing -> using void function
    double radius {};
    std::cout << "\nEnter the radius of the circle: ";
    std::cin >> radius;
    
    std::cout <<"The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << std::endl;
}


void volume_cylinder(){
    double radius {0};
    double height {0};

    std::cout << "\nEnter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "\nEnter the height of the cylinder: ";
    std::cin >> height;
    
    std::cout <<"The volume of a cylinder with radius " << radius << " and height " 
    << height << " is " << cal_volume_cylinder(radius, height) << std::endl;

    
}