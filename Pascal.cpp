#include <iostream>
#include <iomanip>
using namespace std;

class Pascal
{
private:
    int num;
    int **pascal;

public:
    Pascal(int num);
    ~Pascal();
};

Pascal::Pascal(int b) : num(b)
{
    int **pascal = new int *[num + 1];
    for (int i = 0; i < num + 1; i++)
    {
        pascal[i] = new int[i];
    }
    // Formation of the coefficient
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }
    // Print coefficients
    cout << endl;
    cout << "Coefficients for (x + y)^" << num << " are:";
    for (int j = 0; j <= num; j++)

    {
        cout << setw(5) << pascal[num][j];
    }
    cout << endl;
}

Pascal::~Pascal()
{
    for (int i = 0; i < num + 1; i++)
    {
        delete[] pascal[i];
    }
    delete[] pascal;
}

int main()
{
    Pascal a(12);
    return 0;
}