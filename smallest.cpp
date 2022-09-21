#include "smallest.h"
#include <limits>
Smallest::Smallest()
{
    current = numeric_limits<int>::max();
    cout << "This is the current: " << current << endl;
}
int Smallest::operator()(int next)
{
    if (next < current)
        current = next;
    return current;
}