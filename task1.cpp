/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
fileName: task1.cpp

Abraham    -Feb 2, 2022

assignment#: 1

fileDescription: this program calculates the
average of the integers 10 and 12

academicIntegrityStatement: syllabus
\*///////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{


    //variableDeclarations
    int integer1, integer2, sum, average;

    //values
    integer1 = 10;
    integer2 = 12;
    sum = integer1 + integer2;
    average = sum/2;

    //outPut
    cout << "The average of " << integer1 << " and " << integer2 << " is " << average << endl;


    return 0;
}
