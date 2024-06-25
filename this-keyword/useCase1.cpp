// Example 1 -  Passing the current object as a parameter to another method:

#include <iostream>

using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello from MyClass!" << endl;
    }

    void callDisplay(MyClass* obj) {
        obj->display();
    }

    void execute() {
        callDisplay(this); // Passing current object
    }
};

int main() {
    MyClass obj;
    obj.execute(); // Output: Hello from MyClass!
    return 0;
}

// OUTPUT - 
// Hello from MyClass!
