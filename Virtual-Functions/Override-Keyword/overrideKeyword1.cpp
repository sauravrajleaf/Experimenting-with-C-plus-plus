#include <iostream>

using namespace std;


class Animal {
public:
    virtual void makeSounds() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSounds() override { // Error: function name mismatch  
        cout << "Woof! Woof!" << endl;
    }
};

int main() {
    Animal* ptr;

    Dog dog;

    ptr = &dog;

    ptr->makeSounds();

    return 0;

}