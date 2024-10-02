/*
pictureFrames(question6).cpp (project file)

Abraham Avila   2/22/2022

Assignment #1

This program calculates the bill
for a picture frame by inputting the dimensions
from the user then choosing between regular/fancy
frame, color, and amount of crowns requested with
the frame

Academic Integrity as per syllibus
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int crownNumber;
    string colorFrame, frameChoice, colorChoice;
    double frameArea, framePemetr, frameWeidth, frameLength;
    double regularCost, fancyCost, totalRegular, totalFancy, totalColor, totalCrown, grandTotal;

    cout << setprecision(2) << fixed;

    cout << "Enter Length of frame (in inches): ";
    cin >> frameLength;

    cout << endl << "Enter Width of frame (in inches): ";
    cin >> frameWeidth;

    cout << endl << "Would you like a regular frame or fancy frame? r or f: ";
    cin >> frameChoice;

    cout << endl << "Will your frame be colored? Y or N: ";
    cin >> colorFrame;

    cout << endl << "What is your desired color? ";
    cin >> colorChoice;

    cout << endl << "Quantity of Crown corners (up to 4 crowns only): ";
    cin >> crownNumber;

    framePemetr = (2 * frameLength) + (2 * frameWeidth);

    frameArea = frameLength * frameWeidth;

    regularCost = framePemetr * 0.15;

    fancyCost = framePemetr * 0.25;

    totalRegular = (frameArea * 0.09) + regularCost;

    totalFancy = (frameArea * 0.09) + fancyCost;

    if (frameChoice == "r" || frameChoice == "R" || frameChoice == "Regular" || frameChoice == "regular")
    {
        totalRegular = totalRegular;
    }
    else if (frameChoice == "f" || frameChoice == "F" || frameChoice == "Fancy" || frameChoice == "fancy")
    {
        totalFancy = totalFancy;
    }
    else
    {
        cerr << endl << "Error!.....Please input the letter indicated or type out the choice";
    }

    if (colorFrame == "y" || colorFrame == "Y" || colorFrame == "Yes" || colorFrame == "yes")
    {
        totalColor = framePemetr * 0.10;
    }
    else if (colorFrame == "n" || colorFrame == "N" || colorFrame == "No" || colorFrame == "no")
    {
        totalColor = 0;
    }
    else if (colorFrame == "NO")
    {
        cerr << "Don't be rude! I was just asking bro!";
    }
    else
    {
        cerr << endl << "Error!.....Please input the letter indicated or type out the choice";
    }

    if (crownNumber == 0)
    {
        totalCrown = 0;
    }
    else if (crownNumber > 0)
    {
        totalCrown = crownNumber * 0.35;
    }
    else
    {
        cerr << "Error!.....Please input the amount desired";
    }

    //grand total
    if (frameChoice == "r" || frameChoice == "R" || frameChoice == "Regular" || frameChoice == "regular")
    {
        grandTotal = totalColor + totalCrown + totalRegular;
    }
    else if (frameChoice == "f" || frameChoice == "F" || frameChoice == "Fancy" || frameChoice == "fancy")
    {
        grandTotal = totalColor + totalCrown + totalFancy;
    }
    else
    {
        cerr << endl << "Error!.....Please input the letter indicated or type out the choice";
    }

    cout << "__________________________________________________________________________________________________________________" << endl;

    if (frameChoice == "r" || frameChoice == "R" || frameChoice == "Regular" || frameChoice == "regular")
    {
        cout << endl << "Total cost for Regular Frame w/ glass top & card board paper: $" << totalRegular << endl;
    }
    else if (frameChoice == "f" || frameChoice == "F" || frameChoice == "Fancy" || frameChoice == "fancy")
    {
        cout << endl << "Total cost for Fancy Frame w/ glass top & card board paper: $" << totalFancy << endl;
    }
    else
    {
        cerr << endl << "Error!.....Please input the letter indicated or type out the choice";
    }

    cout << endl << "Your color of choice: " << colorChoice << endl;
    cout << endl << "Number of Crowns: " << crownNumber << endl;
    cout << endl << "Grand Total is...$" << grandTotal << endl;


    return 0;
}
