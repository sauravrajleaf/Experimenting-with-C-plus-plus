#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() { // Virtual function
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() override { // Override the virtual function
        cout << "Dog is eating bread" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() override { // Override the virtual function
        cout << "Cat is eating fish" << endl;
    }
};

void feedAnimal(Animal* animal) {
    animal->eat(); // Calls the appropriate eat() function based on the actual object type
}

int main() {
    Dog dog;
    Cat cat;
    Animal* ptr;

    ptr = &dog;
    feedAnimal(ptr); // This will call Dog's eat() function

    ptr = &cat;
    feedAnimal(ptr); // This will call Cat's eat() function

    return 0;
}

// OUTPUT - 
// Dog is eating bread
// Cat is eating fish
