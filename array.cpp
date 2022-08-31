#include <iostream>
#include <iomanip>
using namespace std;

// void print(const int numbers[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << numbers[i] << " ";
//     }
//     return;
// }

// int main(int argc, char const *argv[])
// {
//     int numbers[15] = {5, 7, 9, 11, 13};
//     print(numbers, 5);
//     return 0;
// }
void findGrades(const int scores[], char grades[], int size)
{
    char temp[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    for (int i = 0; i < size; i++)
        grades[i] = temp[scores[i] / 10];
    return;
}

int main(int argc, char const *argv[])
{
    string names[4] = {"George", "John", "Luci", "Mary"};
    int scores[4] = {78, 73, 91, 72};
    char grades[4];
    findGrades(scores, grades, 5);
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << left << names[i] << " " << setw(2);
        cout << scores[i] << " " << setw(2) << grades[i] << endl;
    }

    return 0;
}
