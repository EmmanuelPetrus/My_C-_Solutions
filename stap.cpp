#include "studen.h"

int main(int argc, char const *argv[])
{
    fstream stdStrm1;
    stdStrm1.open("File.dat",ios::binary|ios::out);
    if (!stdStrm1.is_open())
    {
        cout << "File.dat cannot be opened for writing!";
        assert(false);
    }
    
    Student std1 (1 , "John", 3.91);
    Student std2 (2 , "Mary", 3.82);
    Student std3 (3 , "Lucie", 4.00);
    Student std4 (4 , "Edward", 3.71);
    Student std5 (5 , "Richard", 3.85);

    stdStrm1.write(reinterpret_cast <char*> (&std1), sizeof (Student));
    stdStrm1.write(reinterpret_cast <char*> (&std2), sizeof (Student));
    stdStrm1.write(reinterpret_cast <char*> (&std3), sizeof (Student));
    stdStrm1.write(reinterpret_cast <char*> (&std4), sizeof (Student));
    stdStrm1.write(reinterpret_cast <char*> (&std5), sizeof (Student));
    stdStrm1.close ();


    fstream stdStrm2;
    stdStrm2.open ("File.dat", ios :: binary | ios :: in);
    if (!stdStrm2.is_open())
    {
        cout << "File.dat cannot be opened for reading!";
        assert (false);
    }

    cout << left << setw (4) << "ID" << " ";
    cout << setw(15) << left << "Name" << " ";
    cout << setw (4) << "GPA" << endl;
    
    Student std;
    for (int i = 0; i < 5; i++)
    {
        stdStrm2.read(reinterpret_cast <char*> (&std), sizeof (Student));
        cout << setw (4) << std.getId() << " ";
        cout << setw(15) << left << std.getName() <<" ";
        cout << fixed << setw (4) << setprecision (2) << std.getGpa ();
        cout << endl;
    }
    stdStrm2.close();
    return 0;
}
