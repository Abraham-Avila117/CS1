
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int iNum;
    float avg;

    cout << "Enter number to find if it is even or odd " << endl;
    cin >> iNum;

    if (iNum % 2 == 0)
    {
        cout << endl << iNum << " is even!" << endl;
    }
    else
    {
        cout << endl << "this is odd bitch!" << endl;
    }

    return 0;
}
