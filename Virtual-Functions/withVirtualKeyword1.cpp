#include <iostream>

using namespace std;

class Animal {
public:
    //Overridden Function
    virtual void eat() { // Make the function virtual
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() override { // Override the base class's virtual function
        cout << "Dog is eating bread" << endl;
    }
};

int main() {
    Animal* ptr;
    Dog dog;
    ptr = &dog;

    // Virtual function, binded at runtime.
    ptr->eat(); // This will now call Dog's eat() function
    return 0;
}

