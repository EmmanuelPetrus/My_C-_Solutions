#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
class Time
{
private:
    int hours, minutes, seconds, daytime, conv_second;

public:
    Time(int hours, int minutes, int seconds, int daytime);
    Time();
    Time &operator++();
    void operator()();
    Time &operator+=(const Time &a1);
    ~Time();
};

#endif