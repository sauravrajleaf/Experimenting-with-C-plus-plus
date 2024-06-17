// Program of function overloading with different types of arguments.

#include<iostream>  
using namespace std;

// Function declarations (prototypes) - (good practice, especially for larger projects)
int mul(int, int);
float mul(float, int);

// Function definitions
int mul(int a, int b)
{
    return a * b;
}
float mul(float x, int y)
{
    return x * y;
}


int main()
{
    int r1 = mul(6, 7);
    float r2 = mul(0.2f, 3);
    cout << "r1 is : " << r1 << endl;
    cout << "r2 is : " << r2 << endl;
    return 0;
}

// OUTPUT -
// r1 is : 42
// r2 is : 0.6
