#ifndef SMALLEST_H
#define SMALLEST_H
#include <iostream>
using namespace std;
class Smallest
{
private:
    int current;

public:
    Smallest();
    int operator()(int next);
};
#endif