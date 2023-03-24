//task24.cpp

#include <iostream>

using namespace std;

int main()
{
    char mStatus;

    cout << "what is your marital status? ";
    cin >> mStatus;

    switch (mStatus)
    {
        case 'm':
        cout << endl << "Individual is Married";
        break;

        case 's':
        cout << endl << "Individual is single";
        break;

        case 'd':
        cout << endl << "Individual is divorced (thats sucks bud)";
        break;

        case 'w':
        cout << endl << "Individual is widowed";
        break;

        default:
        cerr << endl << "Error....Please enter the following letters to indicate your marital status: m, s, d, or w";
    }
    return 0;
}
