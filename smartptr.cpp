#include "smartptr.h"

SmartPtr::SmartPtr(Fraction *p) : ptr(p) {}
SmartPtr::~SmartPtr() { delete ptr; }
Fraction &SmartPtr::operator*() const
{
    return *ptr;
}
Fraction *SmartPtr::operator->() const
{
    return ptr;
}