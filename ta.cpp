#include "ta.h"

TA::TA(string nm, double gp, double sal) : Person(nm), Student(nm, gp), Professor(nm, sal) {}
TA::~TA() {}
void TA::print()
{
    cout << "Teaching Assistance: " << endl;
    cout << "Name: " << name << " ";
    cout << "GPA: " << gpa << " ";
    cout << "Salary: " << salary << endl
         << endl;
}