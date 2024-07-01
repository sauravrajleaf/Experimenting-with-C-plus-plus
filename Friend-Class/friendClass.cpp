#include <iostream>  

using namespace std;

class A
{
    // Private Data Member
    int x = 5;

    friend class B; // friend class.  
};

class B
{
public:
    // Accessing private data member variable of class A
    void display(A& a)
    {
        cout << "value of x is : " << a.x;
    }
};


int main()
{
    A a;
    B b;

    // Passing object a of class type A in member function of b
    b.display(a);

    return 0;
}