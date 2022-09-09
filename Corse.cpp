#include "Corse.h"

Course::Course(string nm, int ut) : name(nm), units(ut)
{
    roster = new courseRoster;
}

Course::~Course() {}

string Course::getName() const
{
    return name;
}
void Course::addStudent(string name)
{
    roster->addStudent(name);
}

courseRoster *Course::getRoster() const { return roster; }

void Course::print() const
{
    cout << "Course Name: " << name << endl;
    cout << "Number of Units: " << units << endl;
    roster->print();
}