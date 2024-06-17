// Addition of two objects

#include <iostream>  
using namespace std;
class A
{

    int x;
public:
    // Default Constructor
    A() {}
    // Parameterized Constructor Function
    A(int i)
    {
        cout << "I am here " << i << endl;
        x = i;
    }
    void operator+(A);
};

// The scope resolution operator :: is used to define a member function outside the class definition.
// Parameter - Class A 
// Passing an object a of user defined type class A
void A :: operator+(A a)
{
    // The function adds the member variable x of the current object(this->x) to the member variable x of the passed object a(a.x), and prints the result.

    cout << "I am here" << endl;
    cout << x << " " << a.x << endl;
    int m = x + a.x;
    cout << "The result of the addition of two objects is : " << m;

}
int main()
{
    A a1(5);
    A a2(4);

    // Addition of 2 objects    
    // When you write a1 + a2;, it is translated by the compiler into a call to a1.operator+(a2);
    a1 + a2;
    return 0;
}