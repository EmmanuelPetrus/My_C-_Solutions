#include "sten.h"

Student::Student(string na, double gp) : Person(na) { gpa = gp; }
void Student::printGPA()
{
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}
void Student::print()
{
    Person::print();
    printGPA();
}