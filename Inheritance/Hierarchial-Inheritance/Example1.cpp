// Simple example of Hierarchial Inheritance

#include <iostream>  

using namespace std;

// Base class
class Shape                 // Declaration of base class.  
{
public:
    int a;
    int b;
    void get_data(int n, int m)
    {
        a = n;
        b = m;
    }
};

// Derived class from class Shape
class Rectangle : public Shape  // inheriting Shape class  
{
public:
    int rect_area()
    {
        int result = a * b;
        return result;
    }
};

// Derived class from class Shape
class Triangle : public Shape    // inheriting Shape class  
{
public:
    int triangle_area()
    {
        float result = 0.5 * a * b;
        return result;
    }
};

int main()
{
    // Creating an instance of class Rectangle
    Rectangle r;
    // Creating an instance of class Triangle
    Triangle t;

    int length, breadth, base, height;
    cout << "Enter the length and breadth of a rectangle: " << endl;

    cin >> length >> breadth;
    r.get_data(length, breadth);

    cout << "Area of the rectangle is : " << r.rect_area() << endl;

    cout << "Enter the base and height of the triangle: " << endl;
    cin >> base >> height;
    t.get_data(base, height);

    cout << "Area of the triangle is : " << t.triangle_area() << endl;

    return 0;
}

// INPUT - 
// 4 5
// 4 5
// OUTPUT -
// Enter the length and breadth of a rectangle :
// Area of the rectangle is : 20
// Enter the base and height of the triangle :
// Area of the triangle is : 10
