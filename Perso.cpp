#include "Perso.h"
Person::Person(string n) : name(n)
{
}

Person::~Person()
{
}
void Person::getPerson()
{
    cout << "Name: " << name << endl;
}