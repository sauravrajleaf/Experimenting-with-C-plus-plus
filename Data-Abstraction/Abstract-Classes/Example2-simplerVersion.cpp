// A simple example showing the implementation of Abstract Base class and 
// how the pure virtual function or do nothing function declared in the base class
// is defined or overriden in its derived classes

#include <iostream>  

using namespace std;

// Abstract Base Class 
class Shape
{
public:
    virtual void draw() = 0;
};

// Derived class
class Rectangle : Shape
{
public:
    // Overriding the virtual function declared in the Abstract Base Class
    void draw() override
    {
        cout << "drawing rectangle..." << endl;
    }
};

// Derived class
class Circle : Shape
{
public:
    // Overriding the virtual function declared in the Abstract Base Class
    void draw() override
    {
        cout << "drawing circle..." << endl;
    }
};


int main() {
    Rectangle rec;
    Circle cir;

    rec.draw();
    cir.draw();

    return 0;
}

// OUTPUT -
// drawing rectangle...
// drawing circle...
