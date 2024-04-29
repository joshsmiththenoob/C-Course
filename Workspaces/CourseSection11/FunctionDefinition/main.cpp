// Section 11
// Function Definition
// Area of Circle and Volume of a Cylinder
#include <iostream>

const double pi {3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
}

double cal_volume_cylinder(double radius, double height){
    return calc_area_circle(radius) * height;
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
int main(){
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    std::cout << std::endl;
    
    return 0;
}