// An example of Abstract Class leveraging the concept of run time polymorphirsm by overriding the base class functions.

#include <iostream>

using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    // With virtual: Base class pointer calls the derived class function, if it points to a derived class object. This is achieved through dynamic binding using the VTable mechanism.
    virtual void draw() = 0;
    virtual double area() = 0;


    void info() {
        cout << "This is a shape" << endl;
    }
};

// Derived class - Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor function using Member Initializer list
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    // Constructor function using Member Initializer list
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    double area() override {
        return width * height;
    }
};

// printArea works with any Shape pointer, demonstrating the flexibility of using base class pointers for polymorphic behavior.
void printArea(Shape* shape) {
    cout << "Area: " << shape->area() << endl;
}

int main() {
    // Cannot instantiate abstract class
    // Shape shape; // This will cause a compile-time error

    // Creating pointers of type of Base class to leverage the concepts of Polymorphism
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // This is the essence of polymorphism, where a call to a method on a base class pointer is resolved to the correct derived class's method at runtime.
    circle->draw();
    printArea(circle);

    rectangle->draw();
    printArea(rectangle);

    // When using new to allocate memory for shapes, you must remember to delete the pointers to free the memory.
    delete circle;
    delete rectangle;

    return 0;
}

// OUPUT - 
// Drawing Circle
// Area : 78.5397
// Drawing Rectangle
// Area : 24

