// Let's see a simple example when the function is friendly to two classes.



#include <iostream>  

using namespace std;

class B;// forward declarartion.  

class A
{
    int x;// Private data member
public:
    void setdata(int i)
    {
        x = i;
    }
    friend void min(A, B); // friend function.  
};

class B
{
    int y;// Private data member
public:
    void setdata(int i)
    {
        y = i;
    }
    friend void min(A, B);// friend function  
};

// Friend function definition
void min(A a, B b)
{
    if (a.x <= b.y)
        cout << a.x << endl;
    else
        cout << b.y << endl;
}

int main()
{
    A a;
    B b;

    a.setdata(10);
    b.setdata(20);

    // Calling friend function
    min(a, b);// Custom min function for comparing private data member variables of a class

    return 0;
}