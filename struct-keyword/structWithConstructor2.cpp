#include <iostream>

using namespace std;


struct Rectangle {

    // Data Member Variables
    int width, height;

    // Constructor Function
    // Using Member Initializer List
    // This is more efficient because it initializes the member variables directly rather than 
    // assigning values to them after they are constructed.
    Rectangle(int w, int h) : width(w), height(h) {
        // No definition inside the constructor body
        // Data member variables are already initialized before the exectuion reaches inside the constructor body
    }


    void areaOfRectangle() {
        cout << "Area of Rectangle is: " << (width * height);
    }

};
int main(void) {

    // Calls the constructor function
    Rectangle rec(4, 6);// or  Rectangle rec = Rectangle(4, 6);

    rec.areaOfRectangle();

    return 0;
}

// OUTPUT - 
// Area of Rectangle is: 24