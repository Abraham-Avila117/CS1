#include <iostream>
using namespace std;
bool confirm(int&);

int main()
{
    int numCups, cupPint, cupQuarts, cupGallons;
    bool positiveNum;

    cout << "Enter amount of thing in cups: ";
    cin >> numCups;

    confirm(numCups);

    while (confirm(numCups) != false)
    {
        if (confirm(numCups))
            {
                cupPint = numCups * 0.5;
                cout << endl << numCups << " cups is \n"
                << cupPint << " pints\n";

                cupQuarts = numCups/4.;
                cout << endl << numCups << " cups is \n"
                << cupQuarts << " Quarts\n";

                cupGallons = numCups/16.;
                cout << endl << numCups << " cups is \n"
                << cupGallons << " Gallons\n";
            }
        else
        {
            cerr << "Enter a positive number!";
        }
        cout << "\nEnter new value to convert (negative value to exist): ";
        cin >> numCups;
    }



    return 0;
}

bool confirm(int& numCups)
{

    if (numCups >= 0)
    {
        return true;
    }
    else
        return false;

}
