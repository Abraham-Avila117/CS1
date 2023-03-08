/*
phoneBillCalculator.cpp (project file)

Abraham Avila   2/22/2022

This program calculates the phone bill for a company with services Regular and Premium.
In addition, Premium services is calculated differently compared to the regular with
the amount of time the phone user has used their phone through out the day. Thus,
billing day and night fees.

Academic Integrity as per syllabus
*/

#include <iostream>

using namespace std;

int main()
{
    char srviceCode1 = ' ', srviceCode2 = ' ', srviceCode3 = ' ';
    string srviceType;
    int usedTime, timeRegular, timePremium, acountNum, usedTime_day, usedTime_nigt, timeCharges;
    double regularTotal, premiumTotal, dayTotal, nigtTotal, dayNigtTotal, grandTotal;

    //inputs
    cout << "Enter account (6-digit code)#: ";
    cin >> acountNum;

    cout << endl << "Enter Service Code (initials of phone holder then letter of service type): ";
    cin >> srviceCode1 >> srviceCode2 >> srviceCode3;

    cout << endl << "Enter time (in minutes) account #" << acountNum << " has used: ";
    cin >> usedTime;

    cout << endl << "Enter what service type is account #" << acountNum << " using (r for Regular or p for Premium): ";
    cin >> srviceType;


    //time used with service
    if (srviceType == "r" || srviceType == "R")
    {
        timeRegular = usedTime - 50;
        srviceType = "Regular Service";
        regularTotal = timeRegular * 0.20;

        cout << endl << "Account #" << acountNum << " with service type " << srviceType << " service code ("
        << srviceCode1 << srviceCode2 << srviceCode3 << ") has used this service for " << usedTime << " minutes.\n";
        cout << endl << "Account #" << acountNum << " owes.....$" << regularTotal;
    }
    else if (srviceType == "p" || srviceType == "P")
    {
        timePremium = usedTime - 75;
        srviceType = "Premium Service";
        premiumTotal = timePremium * 0.10;

       //Premium Day and Night bill
        cout << endl << "Enter time phone used during the day: ";
        cin >> usedTime_day;

        if (usedTime_day > usedTime)
        {
            cerr << endl << "Error...time used during the day is greater than the time used over all. Please reenter the proper time amount.";
        }
        else
        {
            timeCharges = usedTime_day - 75;
            dayTotal = timeCharges * 0.10;
        }

        cout << endl << "Enter time phone used during the night: ";
        cin >> usedTime_nigt;

        if (usedTime_nigt > usedTime)
        {
            cerr << endl << "Error...time used during the day is greater than the time used over all. Please reenter the proper time amount.";
        }
        else
        {
            timeCharges = usedTime_nigt - 100;
            nigtTotal = timeCharges * 0.05;
        }

        if (usedTime != usedTime_nigt + usedTime_day)
        {
            cerr << endl << "Error...the times you entered from day and night do not add to the total amount of time used for the 24 hour day";
        }
        else
        {
            dayNigtTotal = dayTotal + nigtTotal;
            cout << "Total bill of 24 hour interval.....$" << dayNigtTotal;
        }



        //Grand Total for premium
        if ((usedTime_day > usedTime) || (usedTime_nigt > usedTime) || (usedTime != usedTime_nigt + usedTime_day))
        {
            cerr << "\nTerminate Program to restart";
        }
        else
        {
            grandTotal = dayNigtTotal + premiumTotal;

        cout << endl << "Account #" << acountNum
        << " with service type " << srviceType
        << " service code (" << srviceCode1 << srviceCode2 << srviceCode3
        << ") has used this service for " << usedTime
        << " minutes.\n";
        cout << endl << "In addition to the day and night rates with time of " << usedTime_day << " and " << usedTime_nigt;
        cout << endl << "Account #" << acountNum << " owes.....$" << grandTotal;
        }

    }
    else
    {
        cerr << "Error.....Please enter the following options of the question with an r or p letter";
    }

    return 0;
}
