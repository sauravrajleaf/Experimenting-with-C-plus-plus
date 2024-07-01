#include <iostream>  

using namespace std;

class A
{
    int a = 4;
    int b = 5;
public:
    int mul()
    {
        int c = a * b;
        return c;
    }
};

// Derived class inheritance type is set to private.
// The member functions of the Base class A becomes private in Derived class B.
class B : private A
{
public:
    void display()
    {
        int result = mul(); // Inherited the member function of class A
        cout << "Multiplication of a and b is : " << result << endl;
    }
};


int main()
{
    B b;
    b.display();

    return 0;
}

// OUTPUT -
// Multiplication of a and b is : 20
