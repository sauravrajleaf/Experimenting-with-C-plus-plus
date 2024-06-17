// program to overload the unary operator ++.

#include <iostream>    
using namespace std;
class Test
{
private:
    int num;
public:
    // member initializer list
    Test() : num(8) {}

    void operator ++() {
        num = num + 2;
    }
    void Print() {
        cout << "The Count is: " << num << endl;
    }
};
int main()
{
    Test tt;
    // In C++, the ++tt; syntax is a more natural and idiomatic way to use the overloaded ++ operator. 
    // This line ++tt; is interpreted by the compiler as a call to tt.operator++();.
    ++tt;  // calling of a function "void operator ++()"
    tt.Print();
    // This syntax explicitly calls the member function that overloads the ++ operator.
    tt.operator++();  // calling of a function "void operator ++()"    
    tt.Print();
    return 0;
}

// Conclusion
// Both ++tt; and tt.operator++(); call the same function and achieve the same effect, but ++tt; is preferred for its readability and conciseness. It aligns with the natural usage of operators in C++ and makes the code easier to understand and maintain.