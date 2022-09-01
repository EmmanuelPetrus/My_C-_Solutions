#include "Matrix.h"

int main()
{
    cout << "matrix1" << endl;
    Matrix matrix1(3, 4);
    matrix1.setup();
    matrix1.print();

    cout << "matrix2" << endl;
    Matrix matrix2(3, 4);
    matrix2.setup();
    matrix2.print();

    cout << "A new matrix3" << endl;
    Matrix matrix3(4, 2);
    matrix3.setup();
    matrix3.print();

    // Adding matrix2 to matrix1 and printing the resulting matrix
    cout << "Result of matrix1 + matrix2" << endl;
    Matrix addResult(3, 4);
    matrix1.add(matrix2, addResult);
    addResult.print();
    // Subtracting matrix2 from matrix1 and printing the resulting matrix
    cout << " Result of matrix1 - matrix2" << endl;
    Matrix subResult(3, 4);
    matrix1.subtract(matrix2, subResult);
    subResult.print();
    // Multiplying matrix1 and matrix3 and printing the resulting matrix
    cout << "Result of matrix1 * matrix3" << endl;
    Matrix mulResult(3, 2);
    matrix1.multiply(matrix3, mulResult);
    mulResult.print();

    return 0;
}