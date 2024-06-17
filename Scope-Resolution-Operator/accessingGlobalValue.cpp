#include <iostream>

using namespace std;

//Global variable
int num = 50;

int main() {
    //Declaring local variable
    int num = 10;

    cout << "Local variable value " << num << endl;

    cout << "Global variable value " << ::num << endl;

    return 0;
}