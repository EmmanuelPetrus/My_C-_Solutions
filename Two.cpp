#include "Two.h"
using namespace std;

Two::Two() : x(0), a('p') {}
Two::Two(int p, char k) : x(p), a(k) {}
Two::Two(const Two &t) : x(t.x), a(t.a) {}
Two::~Two() {}

int Two::getX() { return x; }
char Two::getA() { return a; }

void Two::setX(int p) { x = p; }
void Two::setA(char p) { a = p; }