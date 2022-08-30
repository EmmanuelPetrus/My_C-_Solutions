#ifndef TWO_H
#define TWO_H
#include <iostream>
class Two
{
private:
    int x;
    char a;

public:
    Two();
    Two(int p, char m);
    Two(const Two &t);
    ~Two();

    int getX();
    char getA();
    void setX(int m);
    void setA(char a);
};
#endif