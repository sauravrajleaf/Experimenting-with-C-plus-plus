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

// Declare base class 
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