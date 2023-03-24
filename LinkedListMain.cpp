#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "linkedlist.h"
using namespace std;

int main()
{
    char name[25], otherName[25];
    string stuff;
    linkedlist mylist;
    cout << "Hello world!" << endl;

    ifstream in;

    cout << "Enter file name: ";
    cin >> name;
    cin.ignore(24, '\n');
    in.open(name);

    if(!in.good())
    {
        cerr << "File could not be opened!";
        exit(1);
    }

    in >> stuff;
    while (!in.eof())
    {
        mylist.addtotail(stuff);
        in.clear();
        in >> stuff;
    }


    in.close();
    mylist.print();

    return 0;
}
