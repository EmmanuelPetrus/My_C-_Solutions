#include "Stu.h"

Student::Student(string na, float gp) : Person(na), gpa(gp)
{
}

Student::~Student()
{
}

void Student::getGpa()
{
    cout << "GPA: " << gpa << endl;
}