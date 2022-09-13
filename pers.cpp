#include "pers.h"

Person::Person(string nm) : name(nm) {}
void Person::print()
{
    cout << "Name: " << name << endl;
}