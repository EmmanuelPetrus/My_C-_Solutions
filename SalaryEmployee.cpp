#include "SalaryEmployee.h"
SalaryEmployee::SalaryEmployee(string first_name, string initial, string last_name, int salary) : Employee(first_name, initial, last_name), salary(salary)
{
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::print() const
{
    // cout << "Name: " << first_name << " " << initial << " " << last_name << endl;
    Employee::print();
    cout << "Salary: " << salary << endl;
}
