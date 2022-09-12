#include "Cours.h"

Course::Course() : name("0"), units(0)
{
}
Course::Course(string nm, int n) : name(nm), units(n) {}
Course::~Course()
{
}
void Course::print()
{
    cout << "Course: " << name << "  "
         << "Unit: " << units << endl;
}