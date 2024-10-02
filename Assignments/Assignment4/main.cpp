#include <iostream>
#include "bankAccount.h"
#include <fstream>
using namespace std;

// need fix: 1. account number 2.
int main()
{
    char x,z;
    string name, updateName, updateType, filename;
    string acctType;
    ofstream output;
    double bal, amount;
    double intRate;
    int y;
    bankAccount Account[10];

    cout << "Hello welcome to worldbanking services! ... \n"
    <<"\t we take and never give!\nNext customer please:\n" << endl;

    for (int i = 0; i<4; i++)//getting data from user
    {
        cout << "Enter Name: ";
        cin >> name;
        cin.ignore(100, '\n');

        cout << "Enter Account Type: ";
        cin >> acctType;

        cout << "Enter opening Balance: ";
        cin >> bal;

        cout << "Enter Interest rate(integer%): ";
        cin >> intRate;
        Account[i].setData(name, acctType, bal, intRate);
        cout << "----------------------------------------";
        cout << endl;
    }

    do {
    cout << "\nWhich account would you like to update \n(Enter account holder name or none to exit)? ";
    cin >> updateName;
    cin.ignore(100,'\n');

    if(updateName!="none")
    {
        for (int i = 0; i<4; i++)
        {
            //Account[i].getIntrest();
            if (updateName==Account[i].getAccountHolderName())
            {
                cout <<endl<< "Checkings or Savings(neither to exit)? ";
                cin >> updateType;
                cin.ignore(100, '\n');

                for (int i =0;i<4;i++)
                {
                    if (updateType==Account[i].getAccountType() && updateName==Account[i].getAccountHolderName())
                    {
                        cout <<endl<< "How many transactions will there be? ";
                        cin >> y;
                        while (y>0)
                        {
                            cout <<endl<< "Deposit? (d) or Withdrawal (w)? ";
                            cin >> x;

                            switch (x)
                            {
                                case 'd':
                                case 'D':
                                    cout <<endl<< "Enter Amount to deposit: $";
                                    cin >> amount;
                                    Account[i].deposit(amount);
                                    break;
                                case 'w':
                                case 'W':
                                    cout <<endl<< "Enter Amount to withdrawal: $";
                                    cin >> amount;
                                    Account[i].withdraw(amount);
                                    break;
                            }//end of switch
                            y--;
                        }//end of while
                    cout << "\nHere is the updated account under " << Account[i].getAccountHolderName() << " so far after interest" << endl;
                    Account[i].print();
                    }//end of update if statement
                    else if (updateType=="neither")
                    {
                        break;
                    }
                }
            }//end of second if
        Account[i].updateBalance();
        }//end of first for loop
    }//end of first if
    cout << "\nWould you like to update another account(y/n)? ";
    cin >> z;
    }while (z=='y');

    cout <<endl<< "Here is all of the accounts displayed\n\n";

    for (int i=0;i<4;i++)
    {
        Account[i].print();
    }

    cin.clear();
    cout << "Would you like this data to be into a file(y/n)? ";
    cin >> x;

    switch (x)
    {
    case 'y':
    case 'Y':
        cout <<endl<< "Enter name of your output file: ";
        cin >> filename;

        output.open(filename);

        for (int i=0;i<4;i++)
            Account[i].fstreamPrint(output);
        output <<endl<< "Have a good day!";
        break;
    case 'n':
    case 'N':
        cout <<endl<< "Thank you for you information. We won't do anything suspicous with it.\n Unless you have more money then you need then we will \"share\" to people who need it.\n Have a good day!";
        for (int i=0;i<4;i++)
        {
            if (Account[i].getBalance()>1000.00)
            {
                output.open("messageToAccountHolder.txt");
                output << "Thank you for your \"donations\"!";
                output.close();
                break;
            }
        }
         break;
    }
    output.close();
    return 0;
}
