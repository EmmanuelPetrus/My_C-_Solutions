#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;

class Square
{
private:
    int side;

public:
    Square(int a);
    ~Square();
    int getPeri();
    int getArea();
    int getSide();
};

class Cube : public Square
{
public:
    Cube(int m);
    ~Cube();
    int getArea();
    int getVol();
};
#endif