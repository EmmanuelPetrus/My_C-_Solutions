#ifndef SP_H
#define SP_H
#include <iostream>
using namespace std;
class SP
{
private:
    int *ptr;

public:
    SP(int *ptr);
    ~SP();
    int &operator*() const;
    int *operator->() const;
};
#endif