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
// #define MAX 4
// class Employee
// {
// private:
//     string name;
//     long int number;

// public:
//     Employee() : name("Emmy"), number(0){};
//     Employee(string n, long int no) : name(n), number(no){};
//     void getdata()
//     {
//         cout << "Enter your name: ";
//         cin >> name;
//         cout << "Enter your phone number:";
//         cin >> number;
//     }
//     void putdata()
//     {
//         cout << "Your name is " << name << " and your number is " << number << endl;
//     }
// };

// int main(void)
// {
//     Employee data[MAX];
//     for (int i = 0; i < MAX; i++)
//         data[i].getdata();
//     for (int i = 0; i < MAX; i++)
//         data[i].putdata();
//     return 0;
// }

// an array of classes
// #define MAX 3
// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     void getdist()
//     {
//         cout << "\n    Enter feet: ";
//         cin >> feet;
//         cout << "     Enter inches: ";
//         cin >> inches;
//     }
//     void showdist() const
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     void show_ave_dist() const
//     {
//         cout << "The average is: " << feet << "\'-" << inches << '\"';
//     }
//     void add_dist(Distance, Distance);
//     void div_dist(Distance, int);
// };

// void Distance::add_dist(Distance d2, Distance d3)
// {
//     inches = d2.inches + d3.inches; // add the inches
//     feet = 0;                       //(for possible carry)
//     if (inches >= 12.0)             // if total exceeds 12.0,
//     {                               // then decrease inches
//         inches -= 12.0;             // by 12.0 and
//         feet++;                     // increase feet
//     }                               // by 1
//     feet += d2.feet + d3.feet;      // add the feet
// }

// void Distance::div_dist(Distance d2, int divisor)
// {
//     float fltfeet = d2.feet + d2.inches / 12.0;
//     fltfeet /= divisor;
//     feet = int(fltfeet);
//     inches = (fltfeet - feet) * 12.0;
// }
// int main(int argc, char const *argv[])
// {
//     Distance dist[MAX];
//     Distance total, ave_rage;
//     int n = 0, j;
//     char ans;
//     cout << endl;
//     do
//     {
//         if (n >= MAX)
//         {
//             cout << "\nThe array is full!!!\n";
//             break;
//         }

//         cout << "Enter distance number " << n + 1;
//         dist[n++].getdist();
//         cout << "Enter another (y/n)?: ";
//         cin >> ans;

//     } while (ans != 'n');

//     for (int i = 0, j = MAX - 1; i <= j / 2; i++, j--)
//     {
//         total.add_dist(dist[i], dist[j]);
//     }
//     ave_rage.div_dist(total, MAX);
//     ave_rage.show_ave_dist();
//     cout << endl;
//     return 0;
// }

void maxint(int num[], int m)
{
    int max = 0, n;
    for (int i = 0; i < m; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            n = i;
        }
        else
            continue;
    }
    cout << "The maximum number is " << max << " located at position " << n << " in the array." << endl;
}
int main(int argc, char const *argv[])
{
    int arr[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter a number:";
        cin >> arr[i];
    }
    maxint(arr, 4);

        return 0;
}
