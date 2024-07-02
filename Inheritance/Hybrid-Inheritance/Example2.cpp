// Example of Hybrid Inheritance

#include <iostream>

using namespace std;


// Base class
class A {
public:
    void displayA() {
        cout << "Class A display" << endl;
    }
};

// Class B is derived from class A - Example of single inheritance
class B : virtual public A {
public:
    void displayB() {
        cout << "Class B display" << endl;
    }
};

// Class C is derived from class A - Example of single inheritance
class C : virtual public A {
public:
    void displayC() {
        cout << "Class C display" << endl;
    }
};

// Class D is derived from class B - Example of single inheritance,
// Class B is itself derived from class A
class D : public B {
public:
    void displayD() {
        cout << "Class D display" << endl;
    }
};

// class E is derived from two different classes C and D 
// Class C is derived from class A - Example of single inheritance
// Class D is derived from class B - Example of single inheritance,
class E : public C, public D {
public:
    void displayE() {
        cout << "Class E display" << endl;
    }
};

int main() {
    E e;

    e.displayA(); // Ambiguity: which A's display?
    e.displayB();
    e.displayC();
    e.displayD();
    e.displayE();

    return 0;
}

// OUTPUT -
// Class A display
// Class B display
// Class C display
// Class D display
// Class E display
