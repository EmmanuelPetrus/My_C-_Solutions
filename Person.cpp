#include "Person.h"
using namespace std;

Person::Person(int a, char *t) : age(a), name(t) {}
Person::~Person() {}

int Person::getAge() { return age; }
char *Person::getName() { return name; }

void Person::setAge(int k) { age = k; }
void Person::setName(char *p) { name = p; }
