#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int len, int wid);
    int getlen();
    int getwid();
    int peri();
    int area();
    ~Rectangle();
};

#endif