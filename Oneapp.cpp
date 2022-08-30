#include "One.h"
using namespace std;

int main(int argc, char const *argv[])
{
    One m(12, 15);
    One p(m);
    cout << "The values of x and y are: " << p.getX() << " " << p.getY() << endl;
    return 0;
}
