#include <iostream>
using namespace std;

class Animal {
public:
    //Overridden Function
    void eat() { // Virtual function
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() { // Override the virtual function
        cout << "Dog is eating bread" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() { // Override the virtual function
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
    feedAnimal(ptr); // This should call Dog's eat() function but that do not happens because we are not using the virtual keyword

    ptr = &cat;
    feedAnimal(ptr); // This should call Cat's eat() function but that do not happens because we are not using the virtual keyword

    return 0;
}

// Its correct implementation is in the folder override - keyword

// OUTPUT - 
// Animal is eating
// Animal is eating
