#include <iostream>  

using namespace std;


class A
{
public:
    int x;
    A(int a)  // parameterized constructor.  
    {
        x = a;
    }

    // A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.
    // Copy Constructor
    //Type of parameter expected - object of type class A
    A(A& i) // copy constructor  
    {
        x = i.x;
    }

};
int main()
{
    // Instantiating an object a1 with its member variable as 20
    A a1(20); // Calling the parameterized constructor.  

    // Passing object a1 as the parameter for the declaration and initialization of object a2
    A a2(a1); //  Calling the copy constructor.  


    cout << a2.x;

    return 0;
}

// OUTPUT -
// 20