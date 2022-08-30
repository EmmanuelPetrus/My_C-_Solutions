#include "Two.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Two t(23, 'y');
    cout << t.getA() << " " << t.getX() << endl;
    t.setX(45);
    t.setA('j');
    Two m(t);
    cout << m.getA() << " " << m.getX() << endl;
    return 0;
}
