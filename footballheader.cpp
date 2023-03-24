#include "footballheader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

/*
        footballheader();
        string getPlayerName();
        string getPlayerPosition();

        int getPlayerTD();
        int getPlayerCatch();
        int getPlayerPYards();
        int getPlayerRYards();
        int getPlayerRushYards();
*/

footballheader::footballheader()
{

}

void footballheader::initialize()
{
        for (int i=0; i<10; i++)
    {
        playerIndex[i].name = "";
        playerIndex[i].position = "";
        playerIndex[i].TD = 0;
        playerIndex[i].numCatch = 0;
        playerIndex[i].passYards = 0;
        playerIndex[i].receiveYards = 0;
        playerIndex[i].rushYards = 0;
    }
}

void footballheader::getData(ifstream& indata)
{
    string word;
    int num, i=0;

    while (!indata.eof())
    {
        for (i;i<10; i++)
        {
            indata >> word;
            playerIndex[i].name = word;

            indata >> word;
            playerIndex[i].position = word;

            indata >> num;
            playerIndex[i].TD = num;

            indata >> num;
            playerIndex[i].numCatch = num;

            indata >> num;
            playerIndex[i].passYards = num;

            indata >> num;
            playerIndex[i].receiveYards = num;

            indata >> num;
            playerIndex[i].rushYards = num;
            //next line
        }
    }
}

int footballheader::playerDataCmp(string& index)
{

    for (int i=0; i<10; i++)
        if (playerIndex[i].name == index)
        {
            cout << playerIndex[i].name<<" "
            << playerIndex[i].position <<" "
            << playerIndex[i].TD<<" "
            << playerIndex[i].numCatch<<" "
            << playerIndex[i].passYards<<" "
            << playerIndex[i].receiveYards<<" "
            << playerIndex[i].rushYards<< endl;
            return i;
        }
}

void footballheader::optionToOutput(char y, ofstream& outdata, int i)
{
    string fileName;
    switch (y)
    {
    case 'y':
    case 'Y':
        cout << "Enter file name to output: ";
        cin >> fileName;
        outdata.open(fileName);
        outdata << playerIndex[i].name << endl;
        outdata << playerIndex[i].position << endl;
        outdata << playerIndex[i].TD << endl;
        outdata << playerIndex[i].numCatch << endl;
        outdata << playerIndex[i].passYards << endl;
        outdata << playerIndex[i].receiveYards << endl;
        outdata << playerIndex[i].rushYards << endl;
        outdata.close();
        cout << "Data sent to your file. Good day!\n";
        break;
    case 'n':
    case 'N':
        cout << "Data will not be sent to a file! Goodbye\n";
        break;
    }

}
/*
string footballheader::getPlayerName(fstream& indata)
{
    string player;
    indata >> player;
}

string footballheader::getPlayerPosition(fstream& indata)
{
    string position;
    indata >> position;
}
*/
/*
footballheader::~footballheader()
{
    //dtor
}
*/
