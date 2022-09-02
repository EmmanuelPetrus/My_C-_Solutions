#include "Table.h"
Table::Table(int a, int b) : m(a), size(b)
{
    for (int i = 0; i <= m; i++)
    {
        cout << i << "X" << size << " = " << i * size << endl;
    }
}
Table::~Table() {}