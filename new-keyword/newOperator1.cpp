#include <iostream>  
using namespace std;
int main()
{
    int* ptr;  // integer pointer variable declaration  
    ptr = new int; // allocating memory to the pointer variable ptr.  
    cout << "Enter the number : " << endl;
    cin >> *ptr;
    cout << "Entered number is " << *ptr << endl;
    return 0;
}