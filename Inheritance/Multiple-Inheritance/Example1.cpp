// Example of Multiple Inheritance
// In this example class C is inhereting methods and data member variables from class A and class B


#include <iostream>  

using namespace std;


class A
{
protected:
    int a;
public:
    void get_a(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;
public:
    void get_b(int n)
    {
        b = n;
    }
};


class C : public A, public B
{
public:
    void display()
    {
        // Inhereting protected data member variables from classes A & B
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "Addition of a and b is : " << a + b;
    }
};


int main()
{
    C c;

    // Inhereting methods from class A and B 
    c.get_a(10);
    c.get_b(20);

    c.display();

    return 0;
}

// OUTPUT -
// The value of a is : 10
// The value of b is : 20
// Addition of a and b is : 30