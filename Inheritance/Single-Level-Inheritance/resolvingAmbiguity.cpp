// Example of resolving an abmiguity in single inheritance.
// demonstrating how you can access the base class method even when it is overridden in the derived class.

#include <iostream>  

using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
public:
    // Overriding the function inherited from the base class
    // Same function name
    void display()
    {
        cout << "Class B" << endl;
    }
};

int main()
{
    B b;

    b.display();               // Calling the display() function of B class.  
    b.A::display();            // Explicitly calling the display() function of base class A from the object instance of class B

    return 0;
}

// OUTPUT - 
// Class B
// Class A
