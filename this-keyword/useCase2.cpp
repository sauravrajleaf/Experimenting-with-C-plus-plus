// Referring to the current class instance variable:

#include <iostream>

class MyClass {
private:
    int x;
public:
    MyClass(int x) {
        this->x = x; // Referring to the instance variable
    }

    void display() {
        std::cout << "x = " << x << std::endl;
    }
};

int main() {
    MyClass obj(10);
    obj.display(); // Output: x = 10
    return 0;
}

// OUTPUT - 
// x = 10
