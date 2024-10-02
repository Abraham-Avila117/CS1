//task3.cpp

#include <iostream>

using namespace std;

int main()
{
    int numOfDays , month;

    cout << "Enter month: ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 ||
        month == 12)
        {
            numOfDays = 31;
        }

    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        numOfDays = 30;
    }
    else //February
        numOfDays = 28;
    cout << "there are " << numOfDays << " days in this month\n";
/*
 b) the operator '||' acts and an "or" statement

 c) there is '&&' for "and"
 */


    return 0;
}
