#include "Studentn.h"
Student ::Student() : name("0"), gpa(0.0) {}
Student::Student(string nm, float num) : name(nm), gpa(num)
{
}

Student::~Student()
{
}

void Student::print()
{
    cout << "Student Name: " << name << endl;
    cout << "CGPA: " << gpa << endl;
}