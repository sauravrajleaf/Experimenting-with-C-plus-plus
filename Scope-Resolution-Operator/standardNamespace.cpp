#include <iostream>

int main() {
    int num;

    // use scope resolution operator with std namespace  
    std::cout << "Enter variable value" << std::endl;
    std::cin >> num;
    std::cout << "variable value " << num << std::endl;

}