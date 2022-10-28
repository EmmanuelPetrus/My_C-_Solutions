#include <iostream>
using namespace std;

template <typename T, int N>
T smallest(T (&array)[N])
{
    T small = 80;
    for (int i = 0; i < N; i++)
    {

        if (array[i] < small && array[i] != 0)
        {
            small = array[i];
            array[i] = 0;
        }
    }
    return small;
}

template <typename T, int N>
T selection_sort(T (&array)[N])
{
    T sorted[N];
    for (int i = 0; i < N; i++)
    {
        sorted[i] = smallest(array);
    }
    for (int i = 0; i < N; i++)
    {
        cout << sorted[i] << endl;
    }
}

int main()
{
    int arr[6] = {12, 10, 11, 1, 56, 55};
    double arr1[5] = {94.9, 67.4, 12.98, 11.34, 4.89};
    char arr2[5] = {'a', 'd', 'y', 'c', 'e'};
    selection_sort(arr);
    return 0;
}
