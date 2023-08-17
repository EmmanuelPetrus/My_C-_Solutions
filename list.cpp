#include <list>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> lst;
    int value;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer:";
        cin >> value;
        lst.push_back(value);
    }
    
    cout << "Print the list in forward direction."<<endl;
    list<int>::iterator iter1;

    for (iter1 = lst.begin(); iter1 !=lst.end(); iter1++)
    {
        cout << *iter1<<" ";
    }
    cout <<endl;

    cout <<"Pring the list in reverse direction." <<endl;
    list <int> :: reverse_iterator iter2;
    for (iter2 = lst.rbegin(); iter2 != lst.rend(); iter2++)
    {
        cout << *iter2<<" ";
    }
    
    return 0;
}
