#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(const string& n, double salary) : name(n), basicSalary(salary) {}
    virtual double calculateSalary() const = 0;
    const string& getName() const { return name; }
    virtual ~Employee() = default;
};
class PermanentEmployee : public Employee {
public:
    PermanentEmployee(const string& n, double salary) : Employee(n, salary) {}
    // Assumption: permanent employees receive a 20% allowance.
    double calculateSalary() const override { return basicSalary * 1.20; }
};
class ContractEmployee : public Employee {
public:
    ContractEmployee(const string& n, double salary) : Employee(n, salary) {}
    // Assumption: contract employees receive only their basic salary.
    double calculateSalary() const override { return basicSalary; }
};
int main() {
    PermanentEmployee permanent("Asha", 30000);
    ContractEmployee contract("Ravi", 25000);
    Employee* employee = &permanent;
    cout << employee->getName() << ": " << employee->calculateSalary() << '\n';
    employee = &contract;
    cout << employee->getName() << ": " << employee->calculateSalary() << '\n';
}
