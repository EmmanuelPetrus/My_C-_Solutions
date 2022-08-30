#ifndef ONE_H
#define ONE_H
#include <iostream>

class One
{
private:
    int first;
    int sec;

public:
    One();
    One(int a, int b);
    One(const One &a);
    ~One();

    int getX() const;
    int getY()const;
};
#endif