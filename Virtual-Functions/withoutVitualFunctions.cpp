#include <iostream>

using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "Dog is eating bread" << endl;
    }
};

int main() {
    // Creating a pointer to the base class.
    Animal* ptr;

    Dog dog;

    // ptr now points to a Dog object
    ptr = &dog;

    // When a base class pointer holds the address of a derived class object and calls a function, it by default calls the base class's version of that function.
    ptr->eat(); // This will call Animal's eat() function

    return 0;
}

// OUTPUT - 
// Animal is eating
