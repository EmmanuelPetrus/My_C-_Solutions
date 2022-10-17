#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// template <typename T>
// T smaller(const T &first, const T &second)
// {
//     if (first < second)
//         return first;
//     return second;
// }

// specialization of template function
// template <>
// const char *smaller(const(const char *) & first, const(const char *) & second)
// {
//     if (strcmp(first, second) < 0)
//         return first;
//     return second;
// }

// int main()
// {
//     string str1 = "Hello";
//     string str2 = "Hi";
//     cout << "Smaller (Hello , Hi): " << smaller(str1, str2) << endl;

//     const char *s1 = "Bye";
//     const char *s2 = "Bye Bye";
//     cout << "Smaller (Bye , Bye Bye)" << smaller(s1, s2) << endl;
//     return 0;
// }
// template <typename T, int N>
// void print(T (&array)[N])
// {
//     for (int i = 0; i < N; i++)
//         cout << array[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     int arr1[4] = {7, 3, 5, 1};
//     double arr2[3] = {7.5, 6.1, 4.6};
//     print(arr1);
//     print(arr2);
//     return 0;
// }
// void exchange(T &first, T &second)
// {
//     T temp = first;
//     first = second;
//     second = temp;
// }

// int main()
// {
//     int integer1 = 5;
//     int integer2 = 70;
//     exchange(integer1, integer2);
//     cout << "After swapping 5 and 70: ";
//     cout << integer1 << " " << integer2 << endl;

//     double double1 = 101.5;
//     double double2 = 402.7;
//     exchange(double1, double2);
//     cout << "After swapping 101.5 and 402.7: ";
//     cout << double1 << " " << double2 << endl;
//     return 0;
// }
// T smaller(T first, T second)
// {
//     if (first < second)
//         return first;
//     return second;
// }

// int main()
// {
//     cout << "Smaller of a and B: " << smaller('a', 'B') << endl;
//     cout << "Smaller of 12 and 15: " << smaller(12, 15) << endl;
//     cout << "Smaller of 44.2 and 33.1: " << smaller(44.2, 33.1) << endl;
//     return 0;
// }