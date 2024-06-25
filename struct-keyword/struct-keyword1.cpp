#include <iostream>
#include <cstring> // Include the cstring library for strcpy

using namespace std;

struct Student {
    char name[100];
    int id;
    int userRoll;
};

int main() {
    // In C, struct object declaration is done by writing struct Student s1.
    Student s1;
    // Use strcpy to copy string into the character array
    strcpy(s1.name, "saurav");
    s1.id = 1;
    s1.userRoll = 100;

    cout << "Student 1 data is " << s1.name << " " << s1.userRoll << " " << s1.id << endl;

    return 0;
}