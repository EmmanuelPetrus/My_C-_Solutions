#include "per.h"

Person::Person(string nm) : name(nm) {}
Person::~Person() {}
void Person::print()
{
    cout << "Person " << endl;
    cout << "Name: " << name << endl
         << endl;
}