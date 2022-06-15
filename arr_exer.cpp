#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;
// void reversit(char a[])
// {
//     int i, j;
//     char temp;
//     int a_len = strlen(a) - 1;
//     for (i = a_len, j = 0; i > j; i--, j++)
//     {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//     }
//     cout << "The reversed string is: " << a << endl;
// }

// int main(void)
// {
//     char word[26];
//     cout << "Enter the string to be reversed: ";
//     cin.get(word, 26);
//     reversit(word);
//     return 0;
// }
#define MAX 4
class Employee
{
private:
    string name;
    long int number;

public:
    Employee() : name("Emmy"), number(0){};
    Employee(string n, long int no) : name(n), number(no){};
    void getdata()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your phone number:";
        cin >> number;
    }
    void putdata()
    {
        cout << "Your name is " << name << " and your number is " << number << endl;
    }
};

int main(void)
{
    Employee data[MAX];
    for (int i = 0; i < MAX; i++)
        data[i].getdata();
    for (int i = 0; i < MAX; i++)
        data[i].putdata();
    return 0;
}
