#include "Person.h"

Person::Person() : identity(0) {}

Person::Person(long id) : identity(id)
{
    assert(identity >= 100000000 && identity <= 999999999);
}

Person::Person(const Person &person) : identity(person.identity) {}

Person::~Person() {}

void Person::print() const { cout << "Identity: " << identity << endl; }
// using namespace std;

// Person::Person(int a, char *t) : age(a), name(t) {}
// Person::~Person() {}

// int Person::getAge() { return age; }
// char *Person::getName() { return name; }

// void Person::setAge(int k) { age = k; }
// void Person::setName(char *p) { name = p; }
