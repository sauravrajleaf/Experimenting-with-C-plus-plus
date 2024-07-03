// Simple example showing implementation of idea of Encapsulation

#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Getter for length
    double getLength() const {
        return length;
    }

    // Setter for length
    void setLength(double l) {
        if (l > 0) {
            length = l;
        }
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Setter for width
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        }
    }

    // Method to calculate the area of the rectangle
    double getArea() const {
        return length * width;
    }

    // Method to calculate the perimeter of the rectangle
    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    // Modify length and width using setters
    rect.setLength(6.0);
    rect.setWidth(4.0);

    cout << "Updated Length: " << rect.getLength() << endl;
    cout << "Updated Width: " << rect.getWidth() << endl;
    cout << "Updated Area: " << rect.getArea() << endl;
    cout << "Updated Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}

// OUTPUT -
// Length: 5
// Width : 3
// Area : 15
// Perimeter : 16
// Updated Length : 6
// Updated Width : 4
// Updated Area : 24
// Updated Perimeter : 20
