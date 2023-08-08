#include <iostream>
#include <iomanip>
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
    cout << showbase << uppercase<<hex<<right<< setfill("*")
    <<setw(16) << i <<endl<<endl;
    
    cout << "Formatting the floating-point data type" << endl;
    cout << showpoint << right << fixed << setw (16) << setprecision (2) << setfill ('*') << d << endl << endl;

    return 0;
}

