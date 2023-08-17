#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> vec;
    vector <int> :: iterator iter1;
    vector <int> :: reverse_iterator iter2;

    for (int i = 0; i < 10; i++)
    { 
        vec.push_back(i*10);
    }

    cout << "Printing 40 followed by 20"<<endl;
    iter1 = vec.begin();
    iter1 += 4;
    cout << *iter1<<" ";
    iter1 -=2;
    cout << *iter1 << endl;

    cout << "Printing 50 followed by 70" << endl;
    iter2 = vec.rbegin();
    iter2+= 4;
    cout << *iter2 << " ";
    iter2 -= 2;
    cout << *iter2 << endl;

    return 0;
}
