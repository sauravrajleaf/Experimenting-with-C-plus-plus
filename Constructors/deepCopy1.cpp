#include <iostream>  

using namespace std;


class Demo
{
public:
    int a;
    int b;
    int* p;

    // Default Constructor Function
    Demo()
    {
        p = new int;
    }

    Demo(Demo& d)
    {
        a = d.a;
        b = d.b;
        // This makes sure the address of the pointer is different for both of the objects 
        p = new int; // Assigning a new random address in the heap using dynamic memory allocation
        *p = *(d.p); // Preventing shallow copy by pointing to a new address
    }
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
    // Instantiating object d1
    Demo d1;
    d1.setdata(4, 5, 7);

    // Calling the copy constructor function
    Demo d2(d1);

    *d2.p = 10;  // Modify the value pointed by p in d2
    cout << "Data Member variables data from object 2" << endl;
    d2.showdata();

    cout << "Data Member variables data from object 1" << endl;

    d1.showdata();  // This will not reflect the change made through obj2
    return 0;
}

// OUTPUT - 
// Data Member variables data from object 2
// value of a is : 4
// value of b is : 5
// value of *p is : 10
// Data Member variables data from object 1
// value of a is : 4
// value of b is : 5
// value of *p is : 7
