#include <iostream>  

using namespace std;

class Employee {
public:

    int id;//data member (also instance variable)      
    string name;//data member(also instance variable)  
    float salary;

    // A constructor which has parameters is called parameterized constructor.
    // Constructor Function 
    Employee(int i, string n, float s)
    {
        // Modifying the data member variables
        id = i;
        name = n;
        salary = s;
    }

    void display()
    {
        cout << id << "  " << name << "  " << salary << endl;
    }
};

int main(void) {
    Employee e1 = Employee(101, "Sonoo", 890000); //creating an object of Employee   
    Employee e2 = Employee(102, "Nakul", 59000);

    e1.display();
    e2.display();

    return 0;
}

// OUTPUT - 
// 101  Sonoo  890000
// 102  Nakul  59000
