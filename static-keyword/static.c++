#include <iostream>  
using namespace std;
class Account {
public:
    int accno; //data member (also instance variable)      
    string name; //data member(also instance variable)

    // we don't need to create instance for accessing the static members, so it saves memory.
    // Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory. 
    // It is shared to all the objects.
    static float rateOfInterest;

    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }
    void display()
    {
        cout << accno << " " << name << " " << rateOfInterest << endl;
    }
};
// A nonstatic data member may not be defined outside its classC/C++
// It is used to refer the common property of all objects such as rateOfInterest in case of Account, companyName in case of Employee etc.
// As rate of interest value will be commmon across all the instances of the objects we can use static keyword.
float Account::rateOfInterest = 6.5;


int main(void) {
    Account a1 = Account(201, "Sanjay"); //creating an object of Employee   
    Account a2 = Account(202, "Nakul"); //creating an object of Employee  
    a1.display();
    a2.display();
    return 0;
}