/*
Practicum 10

Abraham Avila   4/6/2022

CS1
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


struct candidate
{
    char CanName[20];
    double votes;
    double percentage;
};

void NameCadidate(candidate*, int, double);
void percent(candidate*, int, double);
void Compare(ofstream& outfile, candidate*, int, double);
void Duffy(ofstream& outfile, candidate *canList, int, double);

int main()
{
    int *Num;
    double *totalVotes;
    Num = new int;
    totalVotes = new double;

    cout << "Enter the number of candidates in the political race: ";
    cin >> *Num;
    cout << "Enter total number of votes: ";
    cin >> *totalVotes;
    cout << endl;

    //pointers
    candidate *canList;
    canList = new candidate[*Num];

    ofstream output;
    output.open("Duffy.5.txt");

    NameCadidate(canList, *Num, *totalVotes);
    percent(canList, *Num, *totalVotes);
    Duffy(output, canList, *Num, *totalVotes);
    Compare(output, canList, *Num, *totalVotes);

    delete [] canList;
    delete Num;
    delete totalVotes;

    output.close();

    return 0;
}

void NameCadidate(candidate *canList, int Num, double totalVotes)
{
    for (int i=0; i < Num; i++)
    {
        cout << "Enter name of candidate: ";
        cin >> canList[i].CanName;
        cout << "Enter amount of votes for " << canList[i].CanName << ": ";
        cin >> canList[i].votes;
        cout << endl;
        if (canList[i].votes > totalVotes)
        {
            cerr << "Amount of votes are greater than the total. Restart program";
            break;
        }
    }

}

void percent(candidate *canList, int Num, double totalVotes)
{
    for (int i=0; i < Num; i++)
    {
        canList[i].percentage = canList[i].votes/totalVotes;
        canList[i].percentage *= 100.00;
    }
}

void Duffy(ofstream& outfile, candidate *canList, int Num, double totalVotes)
{
    outfile << fixed << showpoint << setprecision(2);
    outfile << endl <<"Candidates ----- Votes received ----- percentage \n";
    for (int i=0; i<Num; i++)
    {
        outfile << canList[i].CanName << setw(20) << int(canList[i].votes) << setw(20) << canList[i].percentage << "%" << endl;
    }
    outfile << "\nTotal Votes: " << totalVotes;
}

void Compare(ofstream& outfile, candidate *canList, int Num, double totalVotes)
{
    double winner;
    string canWinner;

    winner = canList[0].votes;
    for (int i=0; i<Num; i++)
    {
       if (canList[i].votes > winner)
       {
        winner = canList[i].votes;
        canWinner = canList[i].CanName;
       }
    }
    outfile << "\nWinner of Election is...." << canWinner << " with " << int(winner) << " votes!";
}
