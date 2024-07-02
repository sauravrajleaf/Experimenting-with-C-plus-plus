// Abstraction in header files

#include <iostream>  
#include<math.h>  


using namespace std;


int main()
{
    int n = 4;
    int power = 3;
    int result = pow(n, power);         // pow(n,power) is the  power function  

    cout << "Cube of n is : " << result << endl;
    return 0;
}

// OUTPUT - 
// Cube of n is : 64
