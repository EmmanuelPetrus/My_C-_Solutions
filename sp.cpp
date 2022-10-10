#include "sp.h"
SP::SP(int *p) : ptr(p)
{
}

SP::~SP()
{
}

int &SP::operator*() const
{
    return *ptr;
}
int *SP::operator->() const { return ptr; }
