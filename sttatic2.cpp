#include <iostream>  
using namespace std;
class Account {
public:
    int accno; //data member (also instance variable)      
    string name;

    // we don't need to create instance for accessing the static members, so it saves memory.
    // Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory. 
    // It is shared to all the objects.

    static int count;

    //Constructor Function
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
        count++;
    }
    void display()
    {
        cout << accno << " " << name << endl;
    }
};

// A nonstatic data member may not be defined outside its classC/C++
int Account::count = 0;


int main(void) {
    Account a1 = Account(201, "Sanjay"); //creating an object of Account  
    Account a2 = Account(202, "Nakul");
    Account a3 = Account(203, "Ranjana");
    a1.display();
    a2.display();
    a3.display();
    cout << "Total Objects are: " << Account::count;
    return 0;
}

//OUTPUT 
// 201 Sanjay
// 202 Nakul
// 203 Ranjana
// Total Objects are: 3