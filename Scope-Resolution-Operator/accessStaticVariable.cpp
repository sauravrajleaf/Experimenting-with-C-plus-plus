#include <iostream>

using namespace std;

class Parent {
    // Declaring static member variable
    // num1 is a private static member variable.\
    // It can only be accessed within the class Parent. It cannot be accessed directly from outside the class.
    // Typically, private static members are used for internal class functionality that should not be exposed to the users of the class.
    static int num1;
public:
    // Declaring static member variable
    // num2 is a public static member variable.
    // It can be accessed from outside the class using the scope resolution operator (Parent::num2).
    // Public static members are often used for constants or values that need to be accessible globally.
    static int num2;

    // Defining member function
    void fun1(int num1) {
        // Using the scope resolution operator to access the class's static member variable
        cout << "The value of the class's static variable num1 is " << Parent::num1 << endl;

        // Accessing the local variable num1
        cout << "The value of the local variable num1 is " << num1 << endl;
    }
};

// Defining static member variables using the scope resolution operator
int Parent::num1 = 10;
int Parent::num2 = 100;

int main() {
    Parent objIns;

    // Defining a local variable
    int num1 = 30;

    objIns.fun1(num1);

    // Accessing the class's static member variable num2 using the scope resolution operator
    cout << "The value of the Parent::num2 is " << Parent::num2 << endl;

    return 0;
}
