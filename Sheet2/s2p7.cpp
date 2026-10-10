#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
    string employeeName;
    float basicSalary;
    float HRA;
    float DA;
    float gross_salary;  // renamed to grossSalary to avoid conflict
    public:
    Employee() {
        cout << "enter name of employee: ";
        cin >> employeeName;
        cout << "enter salary of employee: ";
        cin >> basicSalary;
    }
    void calculateHRA() {
        HRA = basicSalary * 20 / 100;
    }
    void calculateDA() {
        DA = basicSalary * 10 / 100;
    }
    void calculateGrossSalary() {  // renamed method
        gross_salary = basicSalary + HRA + DA;
        cout << "gross salary = " << gross_salary << endl;
    }
};

int main() {
    Employee e1;
    e1.calculateHRA();
    e1.calculateDA();
    e1.calculateGrossSalary();
    return 0;
}