#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int ticBox, ticSideline, ticPremium, ticGeneral;
    double totalBox, totalSideline, totalPremium, totalGeneral;

    cout << "Please enter the amount of Box ticket(s) purchased: ";
    cin >> ticBox;
    totalBox = ticBox * 250;

    cout << endl << "Please enter the amount of Sideline ticket(s) purchased: ";
    cin >> ticSideline;
    totalSideline = ticSideline * 100;

    cout << endl << "Please enter the amount of Premium ticket(s) purchased: ";
    cin >> ticPremium;
    totalPremium = ticPremium * 50;

    cout << endl << "Please enter the amount of General Admission ticket(s) purchased: ";
    cin >> ticGeneral;
    totalGeneral = ticGeneral * 25;

    ofstream outs;
    outs.open ("titcketPrice.txt");

    outs << setiosflags (ios::fixed);
    outs << setiosflags (ios::showpoint);
    outs << setprecision(2);

    outs << endl << "Total for Box ticket revenue...$" << totalBox << endl;
    outs << endl << "Total for Sideline ticket revenue...$" << totalSideline << endl;
    outs << endl << "Total for Premium ticket revenue...$" << totalPremium << endl;
    outs << endl << "Total for General ticket revenue...$" << totalGeneral << endl;

    outs.close();


    return 0;
}
