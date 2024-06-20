#include <iostream>  
using namespace std;
class Employee
{
public:
    // A constructor which has no argument is known as default constructor
    // Constructor Function
    Employee()
    {
        cout << "Default Constructor Invoked" << endl;
    }
};
int main(void)
{
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee   
    return 0;
}

// OUTPUT -
// Default Constructor Invoked
// Default Constructor Invoked
