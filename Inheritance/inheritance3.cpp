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


// All the data member variables become protected data members in Dervied class
class Derived : protected Base {
public:
    // Constructor to initialize base class members
    Derived(int pub, int prot, int priv) : Base(pub, prot, priv) {}

    // Function to show access to base class members
    void showAccess() {
        cout << "Public Variable: " << publicVar << endl;      // Accessible directly (now protected in Derived)
        cout << "Protected Variable: " << protectedVar << endl; // Accessible directly (protected in Derived)
        // cout << "Private Variable: " << privateVar << endl;   // Error: Not accessible directly

        // Accessing private variable through a public function of the base class
        cout << "Private Variable (through function): " << getPrivateVar() << endl;
    }
};


class SubDerived : public Derived {
public:
    // Constructor to initialize base class members
    SubDerived(int pub, int prot, int priv) : Derived(pub, prot, priv) {}
    // Function to show access to inherited members
    void showInheritedAccess() {
        cout << "Public Variable: " << publicVar << endl;      // Accessible directly (protected in Derived)
        cout << "Protected Variable: " << protectedVar << endl; // Accessible directly (protected in Derived)
        // cout << "Private Variable: " << privateVar << endl;   // Error: Not accessible directly

        // Accessing private variable through a public function of the base class
        cout << "Private Variable (through function): " << getPrivateVar() << endl;
    }
};



int main() {
    Derived d(1, 2, 3);
    d.showAccess();

    SubDerived sd(4, 5, 6);
    sd.showInheritedAccess();

    // Accessing base class members directly from main will cause an error
    // cout << "Directly accessing publicVar: " << d.publicVar << endl; // Error
    // cout << "Directly accessing protectedVar: " << d.protectedVar << endl; // Error

    return 0;
}

// OUTPUT - 
// Public Variable: 1
// Protected Variable: 2
// Private Variable (through function): 3
// Public Variable: 4
// Protected Variable: 5
// Private Variable (through function): 6
