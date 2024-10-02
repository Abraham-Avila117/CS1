/***************************************************
*	Driver program for Assignment 3      *
******************************************************/

#include <iostream>
using namespace std;
#include "HDDB.h"

int main()
{
	int choice;

	LoadDB();
	cout << "Filter video database on\n" <<
		"1. Year (from when to when)\n" <<
		"2. Genre\n3. Running Time (maximum in minutes)\n" <<
		"4. No filter (show all)\n" <<
		"\nWhat filter do you wish to use? ";
	cin >> choice;
	cin.ignore(100,'\n');
	switch (choice)
	{
		case 1:	YearFilter();
			break;
		case 2: GenreFilter();
			break;
		case 3:	TimeFilter();
			break;
		case 4:	DisplayAll();
	}
	ClearDB();
	return 0;
}
