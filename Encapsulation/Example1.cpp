#include <iostream> 

using namespace std;

class Employee {
private:
    int empId;
    string empName;
    float empSalary;

public:
    // Mutator Member Function
    void setEmpId(int id) {
        empId = id;
    }
    // Mutator Member Function
    void setEmpName(string name) {
        empName = name;
    }
    // Mutator Member Function
    void setEmpSalary(float salary) {
        empSalary = salary;
    }
    // Accessor Member Function
    int getEmpId() {
        return empId;
    }
    // Accessor Member Function
    string getEmpName() {
        return empName;
    }
    // Accessor Member Function
    float getEmpSalary() {
        return empSalary;
    }
};

int main() {
    Employee emp;
    emp.setEmpId(101);
    emp.setEmpName("John Doe");
    emp.setEmpSalary(5000.0);

    cout << "Employee ID: " << emp.getEmpId() << endl;
    cout << "Employee Name: " << emp.getEmpName() << endl;
    cout << "Employee Salary: " << emp.getEmpSalary() << endl;

    return 0;
}

// OUTPUT - 
// Employee ID: 101
// Employee Name: John Doe
// Employee Salary: 5000
