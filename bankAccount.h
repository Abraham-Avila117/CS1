#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;
class bankAccount
{
    public:
        bankAccount(string name = "", string acctType = "", double bal= 0.0, double intRate = 0.0);
        void setData(string name, string acctType, double bal, double intRate);

        string getAccountHolderName()const;
        string getAccountType()const;
        double getBalance() const;
        double getIntrestRate(const);
        double getIntrest()const;
        int getAccountNum();
        void deposit(double amount);
        void withdraw(double amount);
        void updateBalance();
        void print()const;
        void fstreamPrint(ofstream& outdata)const;

    protected:

    private:
        static int num;
        int acctNum;
        string holderName;
        string acctTypeName;
        double balance;
        double intrestRate;
};

#endif // BANKACCOUNT_H
