// Example of Shallow Copy
// This code shows idea copy constructor as per the definition of shallow copy of code in copyConstructor1.cpp file

#include <iostream>  

using namespace std;

class Demo
{
    int a;
    int b;
    int* p;
public:
    // Default Constructor
    Demo()
    {
        p = new int;
    }

    // For the class Demo, the default copy constructor would look something like this (conceptually):
    Demo(const Demo& obj)
    {
        a = obj.a;
        b = obj.b;
        p = obj.p;
    }
    // As there is no user defined copy constructor, the compiler will define a default copy constructor.
    // The functionality performed by the default copy constructor will be to perform shallow copy.

    // A Shallow copy is defined as the process of creating the copy of an object by copying data of all the member variables as it is.
    // The default constructor creates the exact copy or shallow copy of the existing object.
    void setdata(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void showdata()
    {
        cout << "value of a is : " << a << endl;
        cout << "value of b is : " << b << endl;
        cout << "value of *p is : " << *p << endl;
    }
};
int main()
{
    // This will be calling the default constructor inside the Demo class
    // This will instantiate the object d1 
    // If there is no default constructor or parameterized constructor defined compiler will give an error for the same
    Demo d1;

    d1.setdata(4, 5, 7);

    // Passing object d1 as the parameter for the declaration and initialization of object d2
    Demo d2(d1); // or   Demo d2 = d1; Calling the Copy Constructor.  

    d2.showdata();
    return 0;
}

// OUTPUT -
// value of a is : 4
// value of b is : 5
// value of * p is : 7
