#include <iostream>  
using namespace std;


// Abstract Base Class
// We cannot create the object of the base class.
// The main objective of the base class is to provide the traits to the derived classes and to create the base pointer used for achieving the runtime polymorphism.
class Base
{
public:
    virtual void show() = 0;
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class is derived from the base class." << endl;
    }
};
int main()
{   // Pointer to the base class
    Base* bptr;

    //Base b;  
    Derived d;

    //Changing the address of the pointer to the derived class
    bptr = &d;
    bptr->show();

    return 0;
}