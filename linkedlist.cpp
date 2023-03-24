
/*
	Code implements a linked list whereby strings are the data stored in
	each node.
*/

/*
	Source file for implementation of the linkedlist. Refer to header definition for prototypes
*/

#include "linkedlist.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

linkedlist::linkedlist()								// default constructor
{
	head = NULL;
}

linkedlist::~linkedlist()								// destructor for linked list
{
	nodeptr current;
	current = head;
	while (head != NULL)
	{
		head = current->next;
		delete current;
		current = head;
	}
	head = NULL;
}

void linkedlist::addtotail(const string& newdata)		// add to end of the list
{
	nodeptr tmp, curr;
cout<<newdata<<endl;
	tmp = new node;
	tmp->data = newdata;
	tmp->next = NULL;

	if (head != NULL)
	{
		curr = head;
		while (curr->next)
			curr = curr->next;
		curr->next = tmp;
	}
	else
		head = tmp;
}

bool linkedlist::isempty()								// is the list empty
{
	if (head == NULL)
		return true;
	else
		return false;
}

string linkedlist::removefromhead()						// remove node from head of list
{
    string data;
    nodeptr newHead;
    data = head->data;

    newHead = head; //head assigned to newHead
    head = head->next;

    delete newHead; //delete newHead that carries the original head
    return data;
}

void linkedlist::insert(const string& newdata, ofstream& outdata)			// insertion method
{
	nodeptr tmp;
	tmp = new node;
	tmp->data = newdata;
	tmp->next = NULL;

	nodeptr curr;
	nodeptr prev;
	curr = head;
	prev = NULL;

	while (curr && listdatacmp(newdata, curr->data) >= 0)	// while not the place to insert
	{
		prev = curr;
		curr = curr->next;
	}


	if (prev == NULL)										// perform insertion
		head = tmp;
	else
		prev->next = tmp;
	//
	tmp->next = curr;

	tmp = head;
	while (tmp!=NULL)
	{
	   outdata << tmp->data;
	   outdata << endl;
	   tmp = tmp->next;
	}

}

int listdatacmp(const string& data1, const string& data2)		// list data compare function - provide by user
{
	if (data1==data2)
        return 0;
    else
        return -1;
	return 1;
}

void linkedlist::print()
{

        node*tmp = head;
        ofstream outs;
        char otherNam[100];
        cout << "Enter output file name: ";
    cin >> otherNam;
    cin.ignore(24, '\n');
    outs.open(otherNam);
    while (tmp!=NULL)
	{
	   outs << tmp->data;
	   outs << endl;
	   tmp = tmp->next;
	}
	outs.close();
}

