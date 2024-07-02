// Example of Multi-Level Inheritance in which class BabyDog is created inhereting method from 
// Two different class i.e, Animal & Dog

// Multilevel inheritance is a feature of C++ where a class is derived from another derived class, forming a chain of inheritance. 

#include <iostream>  

using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class -> First it is inherited from class Animal
class Dog : public Animal
{
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Sub-Derived class -> It is being derived from a already derived class Dog(Base class Animal)
class BabyDog : public Dog
{
public:
    void weep() {
        cout << "Weeping...";
    }
};


int main(void) {
    // Creating an instance of the sub-derived class
    BabyDog d1;

    // d1 inherits all the methods of its base class which is Dog
    d1.eat();
    d1.bark();
    d1.weep();

    return 0;
}

// OUTPUT -
// Eating...
// Barking...
// Weeping...