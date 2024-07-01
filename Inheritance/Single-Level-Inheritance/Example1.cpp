#include <iostream>  

using namespace std;

// Base class
class Account {
public:
    float salary = 60000;
};

// Derived class
class Programmer : public Account {
public:
    float bonus = 5000;
};


int main(void) {
    // Creating an instance of the derived class type
    Programmer p1;

    // The data member variable which was declared in Base class is also accessible from the Derived
    cout << "Salary: " << p1.salary << endl;

    cout << "Bonus: " << p1.bonus << endl;

    return 0;
}

// OUTPUT - 
// Salary: 60000
// Bonus: 5000
