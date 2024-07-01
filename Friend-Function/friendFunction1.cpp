#include <iostream>

using namespace std;


class Box
{
private:
    int length;
public:
    // Member Initializer List
    Box() : length(0) { }

    friend int modifyPrivateData(Box); //friend function    
};


int modifyPrivateData(Box b)
{
    // Accessing & Modifying Box class priavte data member variable
    b.length += 10;
    return b.length;
}


int main()
{
    Box b;
    cout << "Length of box: " << modifyPrivateData(b) << endl;
    return 0;
}

// OUTPUT -
// Length of box : 10