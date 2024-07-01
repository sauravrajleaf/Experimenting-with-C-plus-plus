#include <iostream>  


using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark() {
        cout << "Barking...";
    }
};


int main(void) {
    // Creating an instance of deervied class Dog
    Dog d1;

    // Dog inherits the member functions of Base class too
    d1.eat();
    d1.bark();

    return 0;
}

// OUTPUT - 
// Eating...
// Barking...