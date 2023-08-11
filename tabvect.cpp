#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int rows = 12;
    int cols = 12;
    vector < vector <int> > table(rows,vector <int>(cols));

    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0 ; j < cols; j++) 
        {
            table [i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(4) << table[i][j] << " ";
        }
        cout << endl;    
    }
    
    return 0;
}
