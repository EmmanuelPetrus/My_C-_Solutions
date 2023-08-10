#include<iostream>
#include<string>
using namespace std;

string reverse(string str);

int main(int argc, char const *argv[])
{
    cout << "Reverse of 'ABCD': " << reverse ("ABCD") << endl;
    cout << "Reverse of 'Hello': " << reverse ("Hello") << endl;
    cout << "Reverse of 'Bye': " << reverse ("Bye") << endl;
    return 0;
}

string reverse(string str)
{
    if (str.length() <= 1)
    {
        return str;
    }
    else
    {
        return reverse(str.substr(1,str.length()-1)) + str.substr(0,1);
    }
}