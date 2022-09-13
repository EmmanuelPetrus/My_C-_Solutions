#include "fperson.h"

Person::Person(string nm) : name(nm) {}
Person::~Person() {}
void Person::print() const
{
    cout << "Name: " << name << endl;
}