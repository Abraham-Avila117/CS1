//task34.cpp

#include <iostream>

using namespace std;

int main()
{
    int numOfDays, month;

    cout << "Enter month: ";
    cin >> month;

    switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            numOfDays = 31;
        cout << "there are " << numOfDays << " days in this month\n";
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            numOfDays = 30;
        cout << "there are " << numOfDays << " days in this month\n";
            break;

        case 2: //February
            numOfDays = 28;
    cout << "there are " << numOfDays << " days in this month\n";
            break;

        default:
            cerr << "error you need to put number not other thing you put";
        }

    // e) it is simpler to use and its good for a short term function
    // f) it cannot use logical or comparison operators and it can only work with integers or one character. it could be said that if statements are good all the time but for which case could be dependent.

    return 0;
}
