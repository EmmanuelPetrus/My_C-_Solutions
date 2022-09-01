#include <iostream>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int score = 92;
//     int &rScore = score;

//     cout << "Accessing value through data variable." << endl;
//     cout << "score: " << score << endl;

//     cout << "Accessing value through reference variable." << endl;
//     cout << "rScore: " << rScore;
//     return 0;
// }

// void swap(int &first, int &second);

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int y = 20;

//     cout << "Values of x and y before swapping." << endl;
//     cout << "x: " << x << " "
//          << "y: " << y << endl;
//     swap(x, y);
//     cout << "Values of x and y after swapping." << endl;
//     cout << "x: " << x << " "
//          << "y: " << y << endl;
//     return 0;
// }

// void swap(int &rX, int &rY)
// {
//     int temp = rX;
//     rX = rY;
//     rY = temp;
// }

// #include "fraction.h"

// Fraction &larger(Fraction &, Fraction &);

// int main(int argc, char const *argv[])
// {
//     Fraction fract1(3, 13);
//     Fraction fract2(5, 17);
//     cout << "Larger of the first pair of fraction: ";
//     larger(fract1, fract2).print();

//     Fraction fract3(4, 9);
//     Fraction fract4(1, 6);
//     cout << "Larger of the second pair of fractions: ";
//     larger(fract3, fract4).print();
//     return 0;
// }

// Fraction &larger(Fraction &fract1, Fraction &fract2)
// {
//     if (fract1.getNumer() * fract2.getDenom() > fract2.getNumer() * fract1.getDenom())
//         return fract1;
//     return fract2;
// }

int main(int argc, char const *argv[])
{
    int size;
    int *pArray;

    do
    {
        cout << "Enter the array size(larger than zero):";
        cin >> size;
    } while (size <= 0);

    pArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value for element " << i << ": ";
        cin >> *(pArray + i);
    }

    cout << "The elements in the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(pArray + i) << " ";
    }
    delete[] pArray;
    return 0;
}
