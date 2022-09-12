#include "Stud.h"

Student::Student() : name("0"), gpa(0.0), cSize(0)
{
    courseList = nullptr;
}

Student::~Student()
{
    delete[] courseList;
}

Student::Student(string n, float gp, Course *cp) : name(n), gpa(gp), courseList(cp), cSize(0) {}

void Student::addCourse(Course &course)
{
    courseList[cSize] = course;
    cSize++;
}

void Student::print()
{
    cout << "Name: " << name << "     CGPA: " << gpa << endl;
    cout << "Courses registered and thier Units" << endl;
    for (int i = 0; i < cSize; i++)
    {
        courseList[i].print();
    }
}