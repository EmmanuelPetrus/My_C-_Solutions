#include "course.h"
#include <iomanip>
#include <cmath>

Course::Course(int num, const char *ifn) : numOfStds(num), inputFileName(ifn)
{
    inputFile.open(inputFileName);
    students = new Student[numOfStds];
    getInput();
    setGrades();
    setAverage();
    setDeviation();
    printResult();
}

Course::~Course()
{
    delete[] students;
    inputFile.close();
}

void Course::getInput()
{
    for (int i = 0; i < numOfStds; i++)
    {
        inputFile >> students[i].id;
        inputFile >> students[i].score;
    }
}

void Course::setGrades()
{
    char charGrades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    for (int i = 0; i < numOfStds; i++)
    {
        int index = students[i].score / 10;
        students[i].grade = charGrades[index];
    }
}

void Course::setAverage()
{
    int sum = 0;
    for (int i = 0; i < numOfStds; i++)
        sum += students[i].score;
    averageScore = static_cast<double>(sum) / numOfStds;
}

void Course::setDeviation()
{
    standardDeviation = 0.0;
    for (int i = 0; i < numOfStds; i++)
    {
        students[i].deviation = students[i].score - averageScore;
        standardDeviation += pow(students[i].deviation, 2);
    }
    standardDeviation = sqrt(standardDeviation) / numOfStds;
}

void Course::printResult() const
{
    cout << endl;
    cout << "Identity     Score      Grade       Deviation" << endl;
    cout << "---------    -----      ------      ----------" << endl;
    for (int i = 0; i < numOfStds; i++)
    {
        cout << setw(4) << noshowpoint << noshowpos;
        cout << right << students[i].id;
        cout << setw(14) << noshowpoint << noshowpos;
        cout << right << students[i].score;
        cout << setw(10) << right << students[i].grade;
        cout << fixed << setw(15) << right << setprecision(2);
        cout << showpoint << showpos;
        cout << students[i].deviation << endl;
    }
    cout << "Average Score: " << fixed << setw(4);
    cout << setprecision(2) << averageScore << endl;
    cout << "Standard Deviation: " << standardDeviation;
}