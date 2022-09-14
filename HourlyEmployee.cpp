#include "HourlyEmployee.h"
HourlyEmployee::HourlyEmployee(string first_name, string initial, string last_name, int hour) : Employee(first_name, initial, last_name), hour(hour)
{
    wage = RATE * hour;
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::print() const
{
    // cout << "Name: " << first_name << " " << initial << " " << last_name << endl;
    Employee::print();
    cout << "Wage: " << wage << endl;
}