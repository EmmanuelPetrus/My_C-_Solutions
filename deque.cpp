#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

void print(deque<string> deq)
{
    for (int i = 0; i < deq.size(); i++)
    {
        cout << deq.at(i) << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    deque <string> deq(5);
    string arr[5] = {"John","Mary","Rich","Mark","Tara"};
    for (int i = 0; i <5 ; i++)
    {
        deq[i] = arr [i];
    }
    print(deq);

    deq.push_back(deq.front());
    deq.pop_front();
    print(deq);

    deq.push_front(deq.back());
    deq.pop_back();
    print(deq);


    return 0;
}
