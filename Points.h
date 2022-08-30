#ifndef POINTS_H
#define POINTS_H
#include <iostream>
class Points
{
private:
    int x;
    int y;

public:
    Points();
    Points(int x, int y);
    Points(const Points &p);
    ~Points();
    void print() const;
    void position();
    void point_distance(Points &k);
};

#endif