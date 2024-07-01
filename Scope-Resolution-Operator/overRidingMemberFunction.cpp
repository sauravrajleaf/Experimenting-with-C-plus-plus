#include <iostream>

using namespace std;

class ABC {
    // Declare access specifier
public:
    void test() {
        cout << "Test function inside the base class ABC" << endl;
    }

    void display() {
        cout << "Getting logged from child class because of concept of inheritance" << endl;
    }

};


// Dervied Class - Inheritance
// The : symbol in the context of class Child : public ABC denotes inheritance in C++. 
// This means that the class child is inheriting from the class ABC.
// The public keyword specifies the type of inheritance. 
// Public inheritance means that the public and protected members of the base class ABC retain their access levels in the derived class child. 
// Private members of the base class are not accessible directly by the derived class.
class Child : public ABC {
public:
    //Concept of Function overriding - same function name as the base class
    void test() {
        // Accessing the base class member function using scope resolution operator
        ABC::test();

        cout << "Test function insde the derived class" << endl;
    }
};

int main() {
    Child objInst;

    objInst.test();

    // Derived class can use the members(public and protected) of the base class - Inheritance
    objInst.display();

}