#include "tass.h"
// Constructor
TA ::TA(string nm, double gp, double sal)
    : Person(nm)
{
    gpa = gp;     // Assignment, not initialization
    salary = sal; // Assignment, not initialization
}
// member function to print GPA
void TA ::printGPA()
{
    cout << "GPA: " << gpa << endl;
}
// member function to print salary
void TA ::printSalary()
{
    cout << "Salary: ";
    cout << fixed << setprecision(2) << salary << endl;
}
// General print function
void TA ::print()
{
    Person ::print();
    printGPA();
    printSalary();
}
