#include <iostream>  

using namespace std;

// Base class
class A
{
protected:
    int a;
public:
    void get_a()
    {
        cout << "Enter the value of 'a' : " << endl;
        cin >> a;
    }
};

// Class derived from base class A - Example of Single Inheritance
class B : public A
{
protected:
    int b;
public:
    void get_b()
    {
        cout << "Enter the value of 'b' : " << endl;
        cin >> b;
    }
};

class C
{
protected:
    int c;
public:
    void get_c()
    {
        cout << "Enter the value of c is : " << endl;
        cin >> c;
    }
};

// Class derived from multiple classes - Example of Multiple Inheritance + As class B alread incorporates the concept
// of single inheritance
class D : public B, public C
{
protected:
    int d;
public:
    void mul()
    {
        get_a();
        get_b();
        get_c();
        cout << "Multiplication of a,b,c is : " << a * b * c << endl;
    }
};


int main()
{
    D d;

    d.mul();

    return 0;
}

// Input - 4 5 6
// OUTPUT -
// Enter the value of 'a' :
// Enter the value of 'b' :
// Enter the value of c is :
// Multiplication of a, b, c is : 10
