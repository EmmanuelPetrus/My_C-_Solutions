#ifndef SMARTPTR_H
#define SMARTPTR_H
#include <iostream>
using namespace std;

class Fraction;
class SmartPtr
{
private:
    Fraction *ptr;

public:
    SmartPtr(Fraction *ptr);
    ~SmartPtr();
    Fraction &operator*() const;
    Fraction *operator->()const;
};
#endif
