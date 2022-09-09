#include "students.h"

Student::Student(string nm) : name(nm)
{
    schedule = new StudentSchedule;
}

string Student::getName() const { return name; }

StudentSchedule *Student::getSchedule() const
{
    return schedule;
}

void Student::addCourse(string name)
{
    schedule->addCourse(name);
}

void Student::print() const
{
    cout << "Student name: " << name << endl;
    schedule->print();
}
Student::~Student() {}