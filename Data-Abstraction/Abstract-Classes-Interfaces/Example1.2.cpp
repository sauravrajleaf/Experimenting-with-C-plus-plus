// Simple illustration explaining the practical implementation of the idea behind interfaces

#include <iostream>  

using namespace std;

// Interfaces should not contain member data (attributes).
// Declare interface methods as public for external usage.
//  Consider prefixing interface names with 'I' or similar to indicate their role.
// Define the Shape interface - Base class
class IShape {
public:
    virtual double getArea() const = 0; // Pure virtual function for area  
    virtual double getPerimeter() const = 0; // Pure virtual function for perimeter  
};

// Implement the Interface for a Circle  
class Circle : public IShape {
private:
    double radius;

public:
    // Constructor function -> Member Initializer list
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return 3.14159265359 * radius * radius;
    }

    double getPerimeter() const override {
        return 2 * 3.14159265359 * radius;
    }
};

// Implement the Interface for a Rectangle  
class Rectangle : public IShape {
private:
    double length;
    double width;

public:
    // Constructor function -> Member Initializer list
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const override {
        return length * width;
    }

    double getPerimeter() const override {
        return 2 * (length + width);
    }
};

int main() {

    // Create instances of Circle and Rectangle  
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Calculate and display the area and perimeter of each shape  
    cout << "Circle Area: " << circle.getArea() << ", Perimeter: " << circle.getPerimeter() << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << ", Perimeter: " << rectangle.getPerimeter() << endl;

    return 0;
}

// OUTPUT - 
// Circle Area : 78.5398, Perimeter : 31.4159
// Rectangle Area : 24, Perimeter : 20
