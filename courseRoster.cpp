#include "courseRoster.h"

courseRoster::courseRoster() : size(0)
{
    stdNames = new string[20];
}

void courseRoster::addStudent(string studentName)
{
    stdNames[size] = studentName;
    size++;
}

void courseRoster::print() const
{
    cout << "List of Students" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << stdNames[i] << endl;
    }
    cout << endl;
}
courseRoster::~courseRoster()
{
}
