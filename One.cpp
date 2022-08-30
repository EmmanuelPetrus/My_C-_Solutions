#include "One.h"
using namespace std;

One::One() : first(0), sec(0) {}
One::One(int k, int m) : first(k), sec(m) {}
One::One(const One &m) : first(m.first), sec(m.sec) {}
One::~One() {}

int One::getX() const { return first; }
int One::getY() const { return sec; }