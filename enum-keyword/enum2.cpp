#include <iostream>  

using namespace std;

enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };


int main()
{
    week day;
    day = Friday; // returns 4 -> day = 4
    cout << "Day: " << day << endl;
    cout << "Day: " << day + 1 << endl;
    return 0;
}

// OUTPUT - 
// Day: 4
// Day: 5
