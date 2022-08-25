#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int int1 = 12345;
    double double1 = 45.78;

    ofstream strmOut("Sample", ios::out | ios::binary);
    if (!strmOut.is_open())
    {
        cout << "The file Sample cannot be opened for writing!";
        assert(false);
    }

    strmOut.write(reinterpret_cast<char *>(&int1), sizeof(int));
    strmOut.write(reinterpret_cast<char *>(&double1), sizeof(double));
    strmOut.close();

    int int2;
    double double2;

    ifstream strmIn("Sample", ios::in | ios::binary);
    if (!strmIn.is_open())
    {
        cout << "The file Sample cannot be opened for writing!";
        assert(false);
    }
    strmIn.read(reinterpret_cast<char *>(&int2), sizeof(int));
    strmIn.read(reinterpret_cast<char *>(&double2), sizeof(double));
    strmIn.close();

    cout << "Value of int2: " << int2 << endl;
    cout << "Value of double2: " << double2 << endl;
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     ifstream ifstr;
//     ifstr.open("file3", ios::in | ios::ate);
//     cout << "File size:" << ifstr.tellg();
//     ifstr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     fstream fstr;
//     fstr.open("file3", ios::in | ios::out);

//     char ch;
//     while (fstr.get(ch))
//     {
//         if (isspace(ch))
//         {
//             fstr.seekp(-1, ios::cur);
//             fstr.put('\r');
//         }
//     }
//     fstr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     char ch;
//     int n;

//     ifstream istr;
//     istr.open("sample", ios::in);

//     n = istr.tellg();
//     while (istr.get(ch))
//     {
//         cout << n << " " << ch << endl;
//         n = istr.tellg();
//     }
//     istr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     ifstream ifstr;
//     ifstr.open("fileMixed", ios::in);
//     if (!ifstr.is_open())
//     {
//         cout << "The file fileMixed cannot be opened for reading!" << endl;
//         assert(false);
//     }
//     char ch;
//     int n;
//     while (ifstr.get(ch))
//     {
//         if (ch >= '0' && ch <= '9')
//         {
//             ifstr.unget();
//             ifstr >> n;
//             cout << n << " ";
//         }
//     }
//     ifstr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     fstream fstr;

//     fstr.open("integerFile", ios::in | ios::out);
//     if (!fstr.is_open())
//     {
//         cout << "integerFile cannot be opened!" << endl;
//         assert(false);
//     }

//     int num;
//     int sum = 0;
//     while (fstr >> num)
//     {
//         sum += num;
//     }
//     fstr.clear();
//     fstr << "\nThe sum of the numbers is: ";
//     fstr << sum;
//     fstr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     ofstream ostr;
//     ostr.open("file1", ios::out | ios::app);
//     if (!ostr.is_open())
//     {
//         cout << "file2 cannot be opened!" << endl;
//         assert(false);
//     }

//     ostr << "\nAugust 24,2022.";

//     ostr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     char ch;

//     ifstream istr;
//     ofstream ostr;

//     istr.open("file1", ios::in);
//     if (!istr.is_open())
//     {
//         cout << "file1 cannot be opened!" << endl;
//         assert(false);
//     }

//     ostr.open("file2", ios::out);
//     if (!istr.is_open())
//     {
//         cout << "file2 cannot be opened!" << endl;
//         assert(false);
//     }

//     while (istr.get(ch))
//     {
//         ostr.put(ch);
//     }

//     istr.close();
//     ostr.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     char ch;

//     ifstream istrm;

//     istrm.open("file1", ios::in);
//     if (!istrm.is_open())
//     {
//         cout << "file1 cannot be opened!" << endl;
//         assert(false);
//     }

//     while (istrm.get(ch))
//     {
//         cout.put(ch);
//     }
//     istrm.close();

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int data;

//     ifstream inStrm;

//     inStrm.open("IntegerFile");
//     if (!inStrm.is_open())
//     {
//         cout << "IntegerFile cannot be opened!";
//         assert(false);
//     }

//     for (int i = 1; i <= 10; i++)
//     {
//         inStrm >> data;
//         cout << data << " ";
//     }

//     inStrm.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     ofstream outStrm;
//     outStrm.open("integerFile");
//     if (!outStrm.is_open())
//     {
//         cout << "IntegerFile cannot be opened!";
//         assert(false);
//     }

//     for (int i = 1; i <= 10; i++)
//     {
//         outStrm << i * 10 << " ";
//     }
//     outStrm.close();
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter a line of integers and eof at the end:" << endl;
//     while (cin >> n)
//     {
//         cout << n * 2 << " ";
//     }

//     return 0;
// }

// int main()
// {
//     int x;
//     cout << "Enter five characters(no spaces):";
//     for (int i = 0; i < 5; i++)
//     {
//         x = cin.get();
//         cout << x << " ";
//     }
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
//         {
//             cout.put(toupper(c));
//         }
//         else
//         {
//             cout.put(c);
//         }
//         pre = c;
//     }
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     char str2[80];
//     cin.getline(str2, 80, '\n');
//     cout << str2;
//     return 0;
// }
