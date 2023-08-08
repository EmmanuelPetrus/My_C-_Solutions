#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool b = true;
    int i = 12000;
    double d = 1246.372;

    cout << "Printing without using formatting"<<endl;
    cout << "Value of b: "<<b <<endl;
    cout << "Value of i: "<<i<<endl;
    cout << "Value of d: "<<d<<endl<<endl;

    cout << "Formatting the Boolean data" << endl;
    cout.setf (ios :: boolalpha);
    cout << b << endl << endl;

    cout << "Formatting the integer data type" << endl;
    cout.setf (ios :: showbase);
    cout.setf (ios :: uppercase);
    cout.setf (ios :: hex, ios :: basefield);
    cout.setf (ios :: right, ios :: adjustfield); 
    cout.width (16);
    cout.fill ('*');
    cout << i << endl << endl;

    cout << "Formatting the floating-point data type" << endl;
    cout.setf (ios :: showpoint);
    cout.setf (ios :: right, ios :: adjustfield); 
    cout.setf (ios :: fixed, ios :: floatfield);
    cout.width (16);
    cout.precision (2);
    cout.fill ('*');
    cout << d << endl;

    return 0;
}
