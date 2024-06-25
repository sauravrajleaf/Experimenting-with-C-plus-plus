#include <iostream>

using namespace std;


struct Rectangle {

    // Data Member Variables
    int width, height;

    // Constructor Function
    Rectangle(int w, int h)
    {
        // Constructor Body Execution
        // Assignment after default construction
        // In this example, the members are assigned values inside the constructor body.
        // Without Member Initializer List:
        width = w;
        height = h;
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