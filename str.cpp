#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int data;
    ifstream inStrm;
    inStrm.open("IntegerFile");
    if (!inStrm.is_open())
    {
        cout << "integerFile cannot be opened!";
        assert(false);
    }
    for (int i = 1; i <= 10; i++)
    {
        inStrm >> data;
        cout << data << " ";
    }
    inStrm.close();
    return 0;
}

// int main()
// {
//     ofstream outStrm;

//     outStrm.open("integerFile");
//     if (!outStrm.is_open())
//     {
//         cout << "integerFile cannot be opened!";
//         assert(false);
//     }

//     for (int i = 1; i <= 10; i++)
//         outStrm << i * 10 << " ";
//     outStrm.close();
//     return 0;
// }
// int main()
// {
//     char str2[80];
//     cin.getline(str2, 80, 'd');
//     cout << str2;
//     return 0;
// }

// int main()
// {
//     char c;
//     cout << "Enter a multi-line text and EOF as the last line." << endl;
//     char pre = '\n';
//     while (cin.get(c))
//     {
//         if (pre == ' ' || pre == '\n')
//             cout.put(toupper(c));
//         else
//             cout.put(c);
//         pre = c;
//     }
//     return 0;
// }

// int main()
// {
//     int x;
//     cout << "Enter five characters (no spaces): ";
//     for (int i = 0; i < 5; i++)
//     {
//         x = cin.get();
//         cout << x << " ";
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "Enter a line of integers and eof at the end: " << endl;
//     while (cin >> n)
//     {
//         cout << n * 2 << " ";
//     }
//     return 0;
// }