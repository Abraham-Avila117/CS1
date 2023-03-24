#ifndef FOOTBALLHEADER_H
#define FOOTBALLHEADER_H
#include <string>
#include <fstream>
using namespace std;

class footballheader
{
    public:
        footballheader();

        void initialize();
        void getData(ifstream&);
        int playerDataCmp(string&);
        void optionToOutput(char, ofstream&, int);
        void output();

        /*
        string getPlayerName(fstream& indata);
        string getPlayerPosition(fstream& indata);

        int getPlayerTD(fstream& indata);
        int getPlayerCatch(fstream& indata);
        int getPlayerPYards(fstream& indata);
        int getPlayerRYards(fstream& indata);
        int getPlayerRushYards(fstream& indata);

        */
        //virtual ~footballheader();

    private:
        struct footballPlayer
        {
            string name;
            string position;
            int TD;
            int numCatch;
            int passYards;
            int receiveYards;
            int rushYards;
        };
        footballPlayer playerIndex[10];
};

#endif // FOOTBALLHEADER_H
