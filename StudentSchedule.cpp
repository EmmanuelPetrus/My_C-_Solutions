#include "StudentSchedule.h"

StudentSchedule::StudentSchedule() : size(0)
{
    courseNames = new string[5];
}

StudentSchedule::~StudentSchedule() { delete[] courseNames; }

void StudentSchedule::addCourse(string name)
{
    courseNames[size] = name;
    size++;
}

void StudentSchedule::print() const
{
    cout << "List of Courses " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << courseNames[i] << endl;
    }
    cout << endl;
}