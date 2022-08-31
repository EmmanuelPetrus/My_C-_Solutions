#ifndef ZELLER_H
#define ZELLER_H
#include <iostream>
class Zeller
{
private:
    int day, month, year;

public:
    Zeller(int a, int b, int c);
    Zeller(const Zeller &k) = delete;
    void week_day();
    ~Zeller();
};

#endif