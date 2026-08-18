// Section 16
// Pure virtual functions/methods and abstract base classes
#include <iostream>
#include <vector>


class Shape{        // Abstract Base Class (ABC)
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;        // pure virtual function/method = abstract method -> No need to implement 
    virtual void rotate() = 0;      // pure virtual function/method = abstract method -> No need to implement 
    virtual ~Shape(){ }               // Always use virtual Destructor when the class got virtual function/method
};


class Open_Shape: public Shape{     // Abstract Class as well : name with underscore(line) + didn't implement abstract method (pure virtual method)
public:
    virtual ~Open_Shape(){};
};


class Closed_Shape: public Shape{   // Abstract Class as well : name with underscore(line) + didn't implement abstract method (pure virtual method)
public:
    virtual ~Closed_Shape(){};
};


class Line: public Open_Shape{          // Concrete class: implement all abstract method from Base -> could be instantiated 
public:
    virtual void draw() override{
        std::cout << "Drawing a line" << std::endl;
    }
    
    virtual void rotate() override{
        std::cout << "Rotating a line" << std::endl;
    }
    
    virtual ~Line(){};
};


class Circle: public Closed_Shape{
public:
    virtual void draw() override{
        std::cout << "Drawing a circle" << std::endl;
    }
    
    virtual void rotate() override{
        std::cout << "Rotating a circle" << std::endl;
    }
    
    virtual ~Circle(){};
};


class Square: public Closed_Shape{
public:
    virtual void draw() override{
        std::cout << "Drawing a square" << std::endl;
    }
    
    virtual void rotate() override{
        std::cout << "Rotating a square" << std::endl;
    }
    
    virtual ~Square(){};
};


void screen_refresh(const std::vector<Shape *> &shapes){ // We'll pass the reference so we don't copy it.
    std::cout << " ============ Refreshing ============ " << std::endl;
    // We didn't want to mess with pointer of the shape -> we don't want to modify the address the pointer stored -> will leak the memory -> const 
    for (const auto ptr: shapes)
        ptr->draw();
}



int main(){
    
//    Shape s{};          // Error  Can not create obj from the Abstract class
//    Shape *ptr_s = new Shape{};         // Error: Can not create obj from the Abstract class

    Circle c{};
    c.draw();           // Statically bound -> Circle::draw()
    
    Closed_Shape *c_ptr1 = new Circle{};
    c_ptr1->draw();  // Dynamically bound -> function/method call will be bound at run-time -> Circle::draw()
    
    Closed_Shape &c_ref1 = c;
    c_ref1.draw();           // Dynamically bound -> Circle::draw()
    
    Shape *c_ptr2 = new Circle{};
    c_ptr2->draw();  // Dynamically bound -> Circle::draw()
    
    Shape &c_ref2 = c;
    c_ref2.draw();           // Dynamically bound -> Circle::draw()
    
    
    std::cout << " ============ Get vector of pointers to Base ============ " << std::endl;
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    std::vector<Shape *> shapes {s1, s2, s3};
    
    screen_refresh(shapes);
    
    
    
    delete c_ptr1;
    delete c_ptr2;
    delete s1;
    delete s2;
    delete s3;
    
    return 0;
}