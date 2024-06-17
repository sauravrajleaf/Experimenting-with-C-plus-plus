#include <iostream>

using namespace std;

class Hello {
public:
    // Declaration of member function
    void helloWord();

    // Declaring a static member function
    void static helloWordAgain();
};

// Defining the member function outside the class using scope resolution operator
void Hello::helloWord() {
    cout << "Hello World!" << endl;
}

// Defining the static member function outside the class using scope resolution operator
void Hello::helloWordAgain() {
    cout << "Hello World Again!" << endl;
}

int main() {
    Hello objIns;

    objIns.helloWord();

    // Accessing static member function using scope resolution operator
    // Static methods belong to the class rather than any object of the class.
    // This means you can call the method using the class name directly without creating an instance of the class.
    Hello::helloWordAgain();
    return 0;
}