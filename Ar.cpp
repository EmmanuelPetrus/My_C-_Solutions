#include "Array.h"

Array::Array(int a, int b) : capacity(a), size(b)
{
    arr = new int[size];
}
Array::Array(const Array &a) : capacity(a.capacity), size(a.size)
{
    arr = new int[size];
}
Array::~Array()
{
    delete[] arr;
}
void Array::insert()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the next element: " << endl;
        cin >> *(arr + i);
    }
}
void Array::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
}
void Array::sort()
{
    for (int i = 1; i < size; i++)
    {

        int key = arr[i];
        int k = i - 1;

        while (k > 0 && key < arr[k])
        {
            arr[k + 1] = arr[k];
            --k;
        }
        arr[k + 1] = key;

        // int d = i - 1;
        // int key = *(arr + i);
        // int k = *(arr + d);
        // if (*(arr) > *(arr + m))
        // if (arr[i] > arr[m])
        // {
        //     // int temp = *(arr);
        //     // *(arr) = *(arr + m);
        //     // *(arr + m) = temp;
        //     int temp = arr[i];
        //     arr[i] = arr[m];
        //     arr[m] = temp;
        // }
        // for (int j = i; j >= 0; j--)
        // {
        //     // if (*(arr + i) < *(arr + j))
        //     if (arr[i] < arr[j])
        //     {
        //         // int temp = *(arr + i);
        //         // *(arr + i) = *(arr + j);
        //         // *(arr + j) = temp;
        //         int temp = arr[i];
        //         arr[i] = arr[j];
        //         arr[j] = temp;
        //     }
        // }
    }
}