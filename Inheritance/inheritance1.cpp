#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;

public:
    // Constructor to initialize all members
    Base(int pub, int prot, int priv) : publicVar(pub), protectedVar(prot), privateVar(priv) {}

    // Public member function to access privateVar
    int getPrivateVar() const {
        return privateVar;
    }
};

// Dervied Class - Inheritance
// The : symbol in the context of class Derived : public Base denotes inheritance in C++. 
// This means that the class child is inheriting from the class Base.
// The public keyword specifies the type of inheritance. 
// Public inheritance means that the public and protected members of the base class Base retain their access levels in the derived class child. 
// Private members of the base class are not accessible directly by the derived class.
class Derived : public Base {
public:
    // Constructor to initialize base class members
    Derived(int pub, int prot, int priv) : Base(pub, prot, priv) {}

    // Function to show access to base class members
    void showAccess() {
        cout << "Public Variable: " << publicVar << endl;      // Accessible directly
        cout << "Protected Variable: " << protectedVar << endl; // Accessible directly
        // cout << "Private Variable: " << privateVar << endl;   // Error: Not accessible directly

        // Accessing private variable through a public function of the base class
        cout << "Private Variable (through function): " << getPrivateVar() << endl;
    }
};

int main() {
    Derived d(1, 2, 3);
    d.showAccess();

    // Accessing public member directly
    cout << "Directly accessing publicVar: " << d.publicVar << endl;

    // Accessing protected member directly will cause an error
    // cout << "Directly accessing protectedVar: " << d.protectedVar << endl; // Error

    return 0;
}

// OUTPUT - 
// Public Variable: 1
// Protected Variable: 2
// Private Variable (through function): 3
// Directly accessing publicVar: 1
