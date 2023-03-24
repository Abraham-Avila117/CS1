/*
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
--challenge2.ccp (change file name before turning it in)

--Abraham Avila and Reece Davis     -Fed 3, 2022

--assignment 2

--calculate the gross expense of a property for the year prior to mowing the area. user must enter the area of the property
and the buildings within it.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <iostream>
using namespace std;

int main()
{
    int mowArea, buildingArea, propertyArea;
    double yearPay, mowTime, mowYear;

    cout << "Area of the Property:";
    cin >> propertyArea;
    cout << "Area of Buildings:";
    cin >> buildingArea;

    mowArea = propertyArea - buildingArea;
    mowTime = mowArea * 18/10;
    mowYear = mowTime * 32;
    yearPay = mowYear * 1.10;


    cout << "---------------------------------------" << endl;
    cout << "Gross Annual Expense:\t\t$" << yearPay << endl;

    return 0;
}
