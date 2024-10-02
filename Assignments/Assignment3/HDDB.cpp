/*********************************************************************************************
*	Implementation program for Assignment 3 partially by Sherine Antoun
*       and the rest CSCI 111 student Named:.Abraham Avila.
**********************************************************************************************/
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

const int MAXDB = 100;

struct disc
{
	char* title;
	char* director;
	int year;
	int runtime;
	char* genre;
	char* pic;
};
typedef disc* discPtr;
discPtr DB[MAXDB];
bool selected[MAXDB]={false};
int numDB;

void HTMLGen();

void YearFilter()
{
    int *year1, *year2;
    year1 = new int;
    year2 = new int;
    cout << "\nEnter lowest year bound: ";
    cin >> *year1;
    cout << "\nEnter highest year bound: ";
    cin >> *year2;
    cout << endl;

    for (int i=0; i<numDB; i++)
        if (DB[i]->year >= *year1 && DB[i]->year <= *year2)
            selected[i] = true;
    delete year1;
    delete year2;
    year1 = nullptr;
    year2 = nullptr;
    cin.ignore();
    HTMLGen();
}

void GenreFilter()
{
    char *genreInput;
    genreInput = new char[20];

    cout << "Enter which Genre of movie you would like to look up...." << endl;
    cout << "List of Genres : \nAction | Adventure | Animation | Comedy | Drama | Fantasy |"
    << " Horror | Music | Suspense/Thriller | Science-Fiction | Western" << endl;
    cout << "(farewarning! this is character sensitive...: ";
    cin >> genreInput;

    for (int i = 0; i < numDB; i++)
        if (strcmp(genreInput, DB[i]->genre)== 0)
            selected[i] = true;
    delete [] genreInput;
    genreInput = nullptr;
    cin.ignore();
    HTMLGen();
}

void TimeFilter()
{
    int *time;
    time = new int;
    cout << "Enter runtime to search movies within the input range(0 to end program): ";
    cin >> *time;
    cout << endl;

    for (int i=0;i<numDB;i++)
        if (*time >= DB[i]->runtime)
            selected[i] = true;
    delete time;
    time = nullptr;
    cin.ignore();
    HTMLGen();
}

void DisplayAll()
{
	for(int i=0;i<numDB;i++)
		selected[i] = true;
	HTMLGen();
}

void LoadDB()
{
    char fname[100], temp[256], ch;

    ifstream infile;
    cout << "Please provide data file name: ";
    cin.getline(fname, 100, '\n');
    infile.open(fname);
    if (!infile.is_open())
    {
        cerr << "Could not open file " << fname << " terminating!" << endl;
        exit(1);
    }
    numDB = 0;
    infile.getline(temp, 255, '\n');
    while (!infile.eof())
    {
        //arrayInitialization
        DB[numDB] = new disc;
        //title
        DB[numDB]->title = new char[strlen(temp)+1];
        strcpy(DB[numDB]->title, temp);
        //year
        infile >> DB[numDB]->year;
        infile >> temp;
        //genre
        DB[numDB]->genre = new char[strlen(temp)+1];
        strcpy(DB[numDB]->genre, temp);
        //runtime
        infile >> DB[numDB]->runtime;
        infile >> temp;
        //pic
        DB[numDB]->pic = new char[strlen(temp)+1];
        strcpy(DB[numDB]->pic, temp);
        do
        {
            infile >> ch;
        }while (isspace(ch));
        infile.getline(temp, 255, '\n');
        DB[numDB]->director = new char[strlen(temp)+2];
        DB[numDB]->director[0] = ch;
        strcpy(&DB[numDB]->director[1], temp);
        numDB++;
        infile.getline(temp, 255, '\n');
    }
    infile.close();
    cout << "Successfully read " << numDB << " video title records. " << endl;
}

void ClearDB()
{
    for (int i=0; i<numDB; i++)
    {
        delete DB[i]->director;
        delete DB[i]->pic;
        delete DB[i]->genre;
        delete DB[i]->title;
        delete DB[i];
        DB[i] = nullptr;
    }
}

void HTMLGen()//output function
{
	char fname[256];
	int n = 0;
	ofstream ofs;
    //cin.ignore();
	cout << "Output file name: ";

	cin.getline(fname,255,'\n');
	ofs.open(fname);
	if (!ofs.is_open())
	{
		cerr << "Could not open output file " << fname << endl;
		exit(1);
	}
	ofs << "<html>\n<body>\n";
	for (int i = 0; i < numDB; i++)
    {
        if (selected[i])
        {
            ofs << "<p><img src=\"images/" << DB[i]->pic << "\" align=left hspace=12>\n";
            ofs << "<b>Title:</b> " << DB[i]->title << "</p>\n"
                << "<p><b>Director:</b> " << DB[i]->director << "</p>\n"
                << "<p><b>Year:</b> " << DB[i]->year << "</p>\n"
                << "<p><b>Running Time:</b> " << DB[i]->runtime << " minutes</p>\n"
                << "<p><b>Genre:</b> " << DB[i]->genre << "</p>\n<p>&nbsp;</p>\n<HR>\n";
                n++;
        }//<p><img src= "images/star wars.jpg"
    }
    ofs << "</body>\n</html>\n";
//	here is where the HTML output is generated including
//	the header and tail, and the information for each video
	ofs.close();
	cout << "Generated " << n << " records in file: " << fname << endl;

}
