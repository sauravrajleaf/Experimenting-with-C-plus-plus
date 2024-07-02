// Example of Ambiquity Resolution in Multiple Inheritance

#include <iostream>  

using namespace std;

// Base class
class A
{
public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};

// Base class
class B
{
public:
    // Function with same name present in class A
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};


// Derived class
class C : public A, public B
{
public:
    void view()
    {
        A::display();         // Calling the display() function of class A.  
        B::display();         // Calling the display() function of class B.  

    }
};

int main()
{
    C c;

    c.view();

    return 0;
}

// OUTPUT -
// Class A
// Class B
