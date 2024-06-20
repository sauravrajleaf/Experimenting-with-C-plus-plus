#include <iostream>  
#include<stdlib.h>  // malloc() is a standard library function that is predefined in a stdlib header file.


using namespace std;

int main()
{

    int len;   // variable declaration  
    cout << "Enter the count of numbers :" << endl;
    cin >> len;

    int* ptr; // pointer variable declaration  
    ptr = (int*)malloc(sizeof(int) * len);  // allocating memory to  the poiner variable  

    for (int i = 0; i < len; i++)
    {
        cout << "Enter a number : " << endl;
        cin >> *(ptr + i);
    }

    cout << "Entered elements are : " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << *(ptr + i) << endl;
    }

    free(ptr);

    return 0;
}