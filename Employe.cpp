#include "Employe.h"
Employee::Employee(string first_name, string initial, string last_name) : first_name(first_name), initial(initial), last_name(last_name)
{
}

Employee::~Employee()
{
}

void Employee::print() const
{
    cout << "Name: " << first_name << " " << initial << " " << last_name << endl;
}