#include "bankAccount.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int bankAccount::num=100;

bankAccount::bankAccount(string name, string acctType, double bal, double intRate)
{
    setData(name, acctType, bal, intRate);
    acctNum=num;
    num+=100;
}

void bankAccount::setData(string name, string acctType, double bal, double intRate)
{
    holderName = name;
    acctTypeName = acctType;
    balance = bal;
    intrestRate = intRate/100;
}

string bankAccount::getAccountType()const
{
    return acctTypeName;
}

string bankAccount::getAccountHolderName() const
{
    return holderName;
}

void bankAccount::deposit(double amount)
{
    if (amount>0)
    balance += amount;
}

void bankAccount::withdraw(double amount)
{
    cout << fixed << showpoint << setprecision(2);
    if(amount<=balance)
        balance-=amount;
    else
        cout << "insufficient funds. Current balance is: $"<< balance<<endl;
}

void bankAccount::updateBalance()
{
    balance += getIntrest();
}

double bankAccount::getIntrest() const
{
    return balance*intrestRate;
}

double bankAccount::getBalance() const
{
    return balance;
}

void bankAccount::print() const
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Account Holder's name is: " << holderName << endl;
    cout << "Account number is: " << acctNum << endl;
    cout << "Account Balance: $" << balance << endl;
    cout << "Account Type is: " << acctTypeName << endl;
    cout << "Interest rate is : " << intrestRate*100<<"%"<< endl << endl;
}

void bankAccount::fstreamPrint(ofstream& outdata) const
{
    outdata << fixed << showpoint << setprecision(2);
    outdata << "Account Holder's name is: " << holderName << endl;
    outdata << "Account number is: " << acctNum << endl;
    outdata << "Account Balance: $" << balance << endl;
    outdata << "Account Type is: " << acctTypeName << endl;
    outdata << "Interest rate is : " << intrestRate*100<<"%"<< endl << endl;
}

/*
bankAccount::~bankAccount()
{
    //dtor
}
*/
