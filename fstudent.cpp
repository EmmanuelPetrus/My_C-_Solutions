#include "fstudent.h"

Student::Student(string nm, double gp) : Person(nm), gpa(gp) {}
void Student::print() const
{
    Person::print();
    cout << "GPA: " << gpa << endl;
}