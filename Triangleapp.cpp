#include "Triangle.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Triangle emma(9, 12, 11);
    emma.getSides();
    cout << "The Perimeter of the Triangle is " << emma.getPerimeter() << endl;
    emma.getArea();
    return 0;
}
