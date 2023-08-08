#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& stream)
{
    cout<<"#";
    stream.precision(2);
    stream.fill('*');
    stream.setf(ios::fixed,ios::floatfield);
    return stream;
}

int main(int argc, char const *argv[])
{
    cout << currency <<setw(12)<< 12325.45<<endl;
    cout << currency << setw(12) << 0.36 << endl;
    return 0;
}
