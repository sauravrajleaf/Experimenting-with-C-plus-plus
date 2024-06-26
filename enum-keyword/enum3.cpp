#include <iostream>

using namespace std;

enum Color {
    RED,    // implicitly 0
    GREEN,  // implicitly 1
    BLUE    // implicitly 2
};

int main() {
    Color color = Color::RED;

    // Accessing enum constants
    cout << "Color: " << color << endl; // Outputs: Color: 0

    // Enum constants are static
    // No need to create an instance of Color to access RED, GREEN, BLUE
    cout << "RED: " << Color::RED << endl;   // Outputs: RED: 0
    cout << "GREEN: " << Color::GREEN << endl; // Outputs: GREEN: 1
    cout << "BLUE: " << Color::BLUE << endl;   // Outputs: BLUE: 2

    // Enum constants are final (immutable)
    // Color::RED = 1; // Error: assignment of read-only variable 'Color::RED'

    return 0;
}

// OUTPUT - 
// Color: 0
// RED: 0
// GREEN: 1
// BLUE: 2
