#include <iostream>  


using namespace std;


class Employee
{
public:
    Employee()
    {
        cout << "Constructor Invoked" << endl;
    }
    ~Employee()
    {
        cout << "Destructor Invoked" << endl;
    }
};
int main(void)
{
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;
}

// Both e1 and e2 are created before any destruction occurs because they are both 
// in the same scope and live until the end of the main function. Hence, both constructors are called first, 
// followed by the destructors in reverse order of construction.

// OUTPUT - 
// Constructor Invoked
// Constructor Invoked
// Destructor Invoked
// Destructor Invoked
