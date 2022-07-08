#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;
// int main(int argc, char const *argv[])
// {
//     const int max = 5;
//     float num[max];
//     float *pNum = num;
//     float total = 0;
//     for (int i = 0; i < max; i++)
//     {
//         cout << "Kindly enter your number:";
//         cin >> num[i];
//     }
//     for (int i = 0; i < max; i++)
//     {
//         total += *(pNum + i);
//     }
//     float average = total / max;
//     cout << "The average of the numbers is: " << average << endl;

//     return 0;
// }

class String
{
private:
    char *str;

public:
    String(char const *s)
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    char *upit()
    {
        int length = strlen(str);
        for (size_t i = 0; i < length; i++)
        {

            if (*(str + i) == ' ')
                continue;
            else
            {
                char m = toupper(*(str + i));
                *(str + i) = m;
            }
        }
        return str;
    }
    ~String()
    {
        cout << "Deleting str.\n";
        delete[] str;
    }
    void display()
    {
        cout << str << endl;
    }
};

int main(int argc, char const *argv[])
{
    String m = "How old are you boy";
    char *k = m.upit();
    cout << k << endl;
    return 0;
}
