/*
Assignment2AbrahamAvila.cpp (project file)

Abraham Avila   3/16/2022

This program consist of three different programs
utilizing a character to use or enter to access
one of these programs. The programs are the angle,
tax, and change solutions. Two programs (Tax and Change)
consist an .txt upon completing the task and will
update said .txt according to what maybe in between
the parenthesis.

Academic Integrity as per syllabus
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int angle(int);
int tax(int);
float change(float);

int main()
{
    int a, t;
    float c;
    char choice;
    cout << "Enter one of the letters to execute its correlating program\n"
    << "\n(a) for add angle solution\n"
    << "\n(c) for change solution\n"
    << "\n(t) for tax solution\n"
    << "\nOtherwise press (q) to exist program\n"
    << "\nWhich would you prefer?: ";
    cin >> choice;

    while (choice != 'Q' && choice != 'q')
    {
            switch (choice)
            {
            case 'a':
            case 'A':
                angle(a); //put function angle()
                break;
            case 'c':
            case 'C':
                change(c); //put function change()
                break;
            case 't':
            case 'T':
                tax(t); //put function tax()
                break;
            default:
            cerr << "Error . . . enter one of the requested characters to run the program\n";
            }

        cout << "\n---------------------------------------------------------------------\n";
        cout << "\nTo continue, enter the requested character from above\n"
        << "Otherwise, press (q) to quit\n"
        << "Enter letter: ";
        cin >> choice;
    }
    return 0;
}

int angle(int a)
{
    int degA, degB, degC, minA, minB, minC, secA, secB, secC;
    cout << "---------------------------------------------------------------------\n";
    cout << "\nWelcome to the angle program!\n"
    << "\n(note: Your minutes and seconds cannot exceed more than 60)\n"
    << "\nEnter the first angle in degrees, minutes, and seconds: "
    << "\nDegrees: ";
    cin >> degA;
    cout << "\nMinutes: ";
    cin >> minA;
    cout << "\nSeconds: ";
    cin >> secA;

    cout << "\nEnter the second angle in degrees, minutes, and seconds: "
    << "\nDegrees: ";
    cin >> degB;
    cout << "\nMinutes: ";
    cin >> minB;
    cout << "\nSeconds: ";
    cin >> secB;

    degC = degA + degB;
    minC = minA + minB;
    secC = secA + secB;

    while (secC > 60 || minC > 60)
    {
        if (secC > 60)
        {
            secC -= 60;
            minC += 1;
        }
        else if (minC > 60)
        {
                minC -= 60;
                degC += 1;
        }
        else
        continue;
    }

        cout << "\nAfter adding the two angles we get...\n";
        cout << "\nTotal Degrees: " << degC << endl;
        cout << "\nTotal Minutes: " << minC << endl;
        cout << "\nTotal Seconds: " << secC << endl;

        cout << "\nHere is the notations: " << degC << "(deg)" << minC << "\'" << secC << "\"\n";

    return a;
}

float change(float c)
{
    ofstream out("ass2(change).txt");
    string item;
    int itemPurchased;
    float itemCost, userPay, changeBack;

    cout << "---------------------------------------------------------------------\n";
    cout << "\nWelcome to the change solution program!\n"
    << "\nEnter the name of the item being purchasing: ";
    cin >> item;

    cout << "\nHow much is this item? $";
    cin >> itemCost;

    cout << "\nHow many " << item << "(s) will be purchased? ";
    cin >> itemPurchased;

    out << "The item " << item
    << " costs " << itemCost
    << " per a single purchase\n";

    itemCost *= itemPurchased;

    cout << "\nHow much will you be paying for this item?\n"
    << "(note: the item costs $" << itemCost
    << " after multiplied by " << itemPurchased << ")\n";
    cout << "Enter amount: ";
    cin >> userPay;

    static_cast<int>(itemCost);

    out << "\nThe Total cost of " << item
    << " by " << itemPurchased
    << " is " << itemCost;

    //change given after user enters the amount they will pay

    out << "\n\nYou would like to pay this item with $" << userPay;

    changeBack = userPay - itemCost;

    out << setiosflags(ios::fixed);
    out << setiosflags(ios::showpoint);
    out << setprecision (2);

    out << "\n\nYour change will be " << changeBack
    << "\n\nHave a Good Day!";

    out.close();

    cout << "\nTask successful! Statement was sent to .txt file (ass2.txt).\n";

    return c;
}

int tax(int t)
{
    ofstream out("ass2(tax).txt");
    long int income, incomeTax, totIncome;
    float helthLev;
    cout << "---------------------------------------------------------------------\n";
    cout << "\nWelcome to the tax payable program!\n"
    << "\n(Please note that your income must be rounded to the nearest dollar)\n";
    cout << "\nEnter your income: $";
    cin >> income;

        if (income < 5401 && income > 0)
        {
            totIncome = income;
            helthLev = income * 0.015;
            out << "\nHealth Levy (1.5%) deductible from income: " << helthLev;

            totIncome -= helthLev;
            out << "\nTotal income retained: $" << totIncome;
            cout << "Task successful! Statement was sent to a .txt file (ass2.txt).\n";
        }
        else if (income < 20700 && income > 0)
        {
            out << "\nYour gross income is $" << income;

            totIncome = income;
            helthLev = income * 0.015;
            out << "\nHealth Levy (1.5%) deductible from income: $" << helthLev;

            income -= 5400;
            incomeTax = income * 0.20;
            out << "\n\nTaxable income for every dollar over $5400: $" << incomeTax;

            incomeTax += helthLev;
            totIncome -= incomeTax;
            out << "\n\nTotal tax deduction (rounded to the dollar): " << incomeTax;
            out << "\n\nNet income = $" << totIncome << endl;
            cout << "Task successful! Statement was sent to a .txt file (ass2.txt).\n";
        }
        else if(income < 38000 && income > 0)
        {
            out << "\nYour gross income is $" << income;

            totIncome = income;
            helthLev = income * 0.015;
            out << "\nHealth Levy (1.5%) deductible from income: " << helthLev;

            income -= 27000;
            incomeTax = income * 0.34;
            incomeTax += 3060;
            out << "\n\nTaxable income for every dollar over $27000: " << incomeTax;

            incomeTax += helthLev;

            totIncome -= incomeTax;
            out << "\n\nTotal tax deduction (rounded to the dollar): " << incomeTax;
            out << "\n\nNet income = $" << totIncome << endl;
            cout << "Task successful! Statement was sent to a .txt file (ass2.txt).\n";
        }
        else if (income < 50000 && income > 0)
        {
            out << "\nYour gross income is $" << income;

            totIncome = income;
            helthLev = income * 0.015;
            out << "\nHealth Levy (1.5%) deductible from income: " << helthLev;

            income -= 38000;
            incomeTax = income * 0.43;
            incomeTax += 8942;
            out << "\n\nTaxable income for every dollar over $38000: " << incomeTax;

            incomeTax += helthLev;

            totIncome -= incomeTax;
            out << "\n\nTotal tax deduction (rounded to the dollar): " << incomeTax;
            out << "\n\nNet income = $" << totIncome << endl;
            cout << "Task successful! Statement was sent to a .txt file (ass2.txt).\n";
        }
        else if (income > 50000 && income > 0)
        {
            out << "\nYour gross income is $" << income;

            totIncome = income;
            helthLev = income * 0.015;
            out << "\nHealth Levy (1.5%) deductible from income: " << helthLev;

            income -= 50000;
            incomeTax = income * 0.47;
            incomeTax += 14103;
            out << "\n\nTaxable income for every dollar over $50000: " << incomeTax;

            incomeTax += helthLev;

            totIncome -= incomeTax;
            out << "\n\nTotal tax deduction (rounded to the dollar): " << incomeTax;
            out << "\n\nNet income = $" << totIncome << endl;
            cout << "Task successful! Statement was sent to a .txt file (ass2.txt).\n";
        }
        else
            cerr << "ERROR...Please enter your income as a positive value!\n"
            << "Task was not send to the .txt file, Please try again!";
        out.close();

    return t;
}
