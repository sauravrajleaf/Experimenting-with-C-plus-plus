#include <iostream>  
#include<stdlib.h>  

using namespace std;


int* func()
{
    int* p;
    p = (int*)malloc(sizeof(int)); // memory is allocated to this pointer
    free(p);// deallocated memory by using the free() function.

    return p;// returning the pointer whose memory is already released
}
int main()
{

    int* ptr;
    ptr = func(); // ptr is a dangling pointer as it is pointing to the released memory location
    free(ptr);// ptr is a dangling pointer as it is pointing to the released memory location
    return 0;
}