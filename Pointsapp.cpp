#include "Points.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Points a(12, 12);
    Points b(13, -4);
    Points c(-6, 16);
    Points d(-12, -13);
    a.print();
    b.print();
    c.print();
    d.print();
    a.position();
    b.position();
    c.position();
    d.position();
    a.point_distance(b);
    c.point_distance(d);
    return 0;
}
