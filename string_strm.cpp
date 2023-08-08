#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    istringstream iss("Hello friends!");
    cout << iss.str()<<endl;
    iss.str("Hello world");
    cout << iss.str() <<endl << endl;

    ostringstream oss("Bye friends!");
    cout << oss.str()<<endl;
    oss.str("Bye world!");
    cout << oss.str()<<endl;
    
    return 0;
}
