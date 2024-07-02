#include <bits/stdc++.h>

using namespace std;


class A {
public:
    void display() {
        cout << "Class A display" << endl;
    }
};

class B : virtual public A {
public:
    // Method overriding
    void display() {
        cout << "Class B display" << endl;
    }
};

class C : virtual public A {
public:
    // Method overriding
    void display() {
        cout << "Class C display" << endl;
    }
};

class D : public B, public C {
};

int main() {
    D d;

    d.A::display(); // Specify that we're calling A's display method
    d.B::display();
    d.C::display();

    return 0;
}

// OUTPUT -
// Class A display
// Class B display
// Class C display
