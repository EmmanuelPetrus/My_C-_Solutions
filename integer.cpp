#include "integer.h"

Integer::Integer(int v)
try : sp(new int)
{
    *sp = v;
}
catch (...)
{
    throw;
}

Integer::~Integer()
{
}

int Integer::getValue()
{
    return *sp;
}