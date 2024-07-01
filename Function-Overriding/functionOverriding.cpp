#include <iostream>  
using namespace std;

// Base Class
class Animal {
    // public member functions
public:
    void eat() {
        cout << "Eating..." << endl;
    }

    void dislay() {
        cout << "Message from the parent class" << endl;
    }
};

// Dervied Class - Inheritance
// The : symbol in the context of class Dog : public Animal denotes inheritance in C++. 
// This means that the class child is inheriting from the class Animal.
// The public keyword specifies the type of inheritance. 
// Public inheritance means that the public and protected members of the base class Animal retain their access levels in the derived class child. 
// Private members of the base class are not accessible directly by the derived class.
class Dog : public Animal
{
public:
    // Defining same function as name as in the base class
    void eat()
    {
        cout << "Eating bread..." << endl;
    }
};


int main(void) {
    // Creating instance of the derived class
    Dog d;
    d.eat();
    //Derived class can also access the members(public and protected) of the base class
    d.dislay();

    // Creating instance of the base class
    Animal a;
    a.eat();

    return 0;
}

// Types of Inheritance
// Public Inheritance: Members of the base class retain their access levels in the derived class. (public ABC)
// Protected Inheritance: Public and protected members of the base class become protected members in the derived class. (protected ABC)
// Private Inheritance: Public and protected members of the base class become private members in the derived class. (private ABC)