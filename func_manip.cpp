#include <iostream>
using namespace std;

ostream& alpha(ostream& os)
{
    os.setf(ios::boolalpha);
    return os;
}

ostream& noalpha(ostream& os)
{
    os.unsetf(ios::boolalpha);
    return os;
}

int main(int argc, char const *argv[])
{
    bool b1 = false;
    bool b2 = true;

    cout << alpha << b1 << " "<<b2<<endl;
    cout << noalpha << b1 << " " <<b2<<endl;
    return 0;
}

