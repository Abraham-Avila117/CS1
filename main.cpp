#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>
#include "footballheader.h"
using namespace std;

int main()
{
    footballheader footballClass;
    ifstream in;
    ofstream out;
    char name[20], y;
    int i;
    string x;

    cout << "Enter file data name: ";
    cin >> name;

    in.open(name);
    if (!in.good())
    {
        cerr << "Could not find file. Terminating...";
        exit(1);
    }
    else
        cout << "\nData has been found!\n";

    footballClass.initialize(); //initialize everything
    footballClass.getData(in);//data stored into playerIndex struct variable

    cout << "Enter name of Player you could like to pull up(Cap sensitive): ";
    cin >> x;

    i = footballClass.playerDataCmp(x);

    cout << "Would you like this Player put into a file(y/n)? ";
    cin >> y;

    footballClass.optionToOutput(y, out, i);

    return 0;
}
