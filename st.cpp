#include "st.h"

Student::Student(string name, double gp) : Person(name), gpa(gp)
{
    assert(gpa <= 4.0);
}
Student ::~Student() {}

void Student::print()
{
    cout << "Student " << endl;
    cout << "Name: " << name << " ";
    cout << "GPA: " << gpa << endl
         << endl;
}