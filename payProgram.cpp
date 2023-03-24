/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
--payProgram.cpp

--Abraham Avila and Reece Davis    -Feb 2, 2022

--Assignment 2

--Calculate the pay for working 23 hours @ a rate of $25.67
\*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{
    int hrsWorked, taxRate;
    double hrlyRate, grossIncome, taxPayable, netIncome;

    hrlyRate = 25.67;
    hrsWorked = 23;
    taxRate = 17;

    grossIncome = hrlyRate * hrsWorked;
    taxPayable = grossIncome * taxRate / 100;
    netIncome = grossIncome - taxPayable;

    cout << "Hours worked:            " << hrsWorked << endl;
    cout << "Hourly Rate:             " << hrlyRate << endl;
    cout << "--------------------------------------" << endl;
    cout << "Gross Income:            " << grossIncome << endl;
    cout << "Less TAX:                " << taxPayable << endl;
    cout << "--------------------------------------" << endl;
    cout << "Net Income:              " << netIncome << endl;

    return 0;
}
