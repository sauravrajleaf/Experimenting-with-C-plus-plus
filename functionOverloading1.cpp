// Program of function overloading when number of arguments vary.
#include <iostream>    

using namespace std;

class Cal {
public:
    // Static methods belong to the class rather than any object of the class. 
    // This means you can call the method using the class name directly without creating an instance of the class.
    // Static methods are often used for utility or helper functions that perform a task in isolation without needing to access or modify instance - specific data.
    // static methods do not have access to instance variables (non-static data members)
    // they provide a clear separation between the class-level functionality and instance-level functionality. 

    // In this code, the add methods are utility functions that do not rely on any instance - specific data, making them ideal candidates for static methods.
    static int add(int a, int b) {
        return a + b;
    }
    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main(void) {
    Cal C; //class object declaration.   
    cout << C.add(10, 20) << endl;
    cout << C.add(12, 20, 23) << endl;

    // Static methods belong to the class rather than any object of the class.
    // This means you can call the method using the class name directly without creating an instance of the class.
    cout << Cal::add(100, 200) << endl;
    cout << Cal::add(100, 200, -1) << endl;

    return 0;
}

// OUTPUT -
// 30
// 55
// 300
// 299