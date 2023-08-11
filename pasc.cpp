#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int power = 5;

    vector < vector <int> > pascal(power+1 , vector <int>());

    for (int i = 0; i <= power; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            pascal[i].push_back(0);
        }
        
    }

    for (int i = 0; i <= power ; i++)
    {
        for (int j = 0 ; j < i + 1; j++) 
        {
            if (j == 0 || i == j)
        {
            pascal [i][j] = 1;
        }
        else
        {
            pascal [i][j] = pascal [i-1] [j-1] + pascal [i-1][j];
        }
        } 
    } 

    for (int i = 0; i <= power; i++)
    {
        cout << "Coefficients of (x + y)^"<<i<<"=====>";
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(4) << pascal[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
