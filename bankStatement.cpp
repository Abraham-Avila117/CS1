#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int
        acctNumber,
        numOfDeposits,
        numOfWithdrawn,
        numOfInterest,
        transNum,
        fee;

    double
        startBalance,
        acctBalance,
        amountDeposit,
        amountWithdrawn,
        amountInterest,
        totDeposit,
        totWithdrawn,
        totInterest;

    char
        transCode;

        ifstream in("ledger.txt");
        ofstream out("Statement.txt");

        while (!in.eof())
        {
            in >> acctNumber >> startBalance;
            acctBalance = startBalance;
            numOfDeposits = 0;
            numOfWithdrawn = 0;
            numOfInterest = 0;
            totDeposit = 0;
            totWithdrawn = 0;
            totInterest = 0;

                for (transNum = 0; transNum < 4; transNum++)
                {
                in >> transCode;

                    switch (transCode)
                        {
                        case 'D':
                        case 'd':
                            in >> amountDeposit;
                            acctBalance += amountDeposit;
                            numOfDeposits++;
                            totDeposit += amountDeposit;
                        break;
                        case 'w':
                        case 'W':
                            in >> amountWithdrawn;
                            acctBalance -= amountWithdrawn;
                            numOfWithdrawn++;
                            totWithdrawn += amountWithdrawn;

                            if (acctBalance < 0)
                            {
                                acctBalance -= 30;
                                fee++;
                            }
                            else
                            continue;

                        break;
                        case 'i':
                        case 'I':
                            in >> amountInterest;
                            acctBalance += amountInterest;
                            numOfInterest++;
                            totInterest += amountInterest;
                        break;
                        default:
                            cerr << "Error...transaction code not defined";
                        }
                    }
                out << "\nAccount Number: " << acctNumber;
                out << "\nAccount Balance: " << startBalance;
                out << "\nNumber of Deposits: " << numOfDeposits;
                out << "\nNumber of Withdrawals: " << numOfWithdrawn;
                out << "\nNumber of Interest paid: " << numOfInterest;
                out << "\nTotal Deposits: " << totDeposit;
                out << "\nTotal Withdrawals: " << totWithdrawn;
                out << "\nTotal Interest paid: " << totInterest;
                out << "\nNumber of Overdrafts: " << fee;
                out << "\nCurrent available balance: " << acctBalance <<endl;
                }


        in.close();
        out.close();

    return 0;
}
