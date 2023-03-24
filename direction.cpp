#include <iostream>
#include <iomanip>

using namespace std;

enum direction {north, east, south, west};
void printDirection (direction dir);

int main()
{
    direction dir;

    //dir = direction(3);
    for (int i = 0; i < 4; i++)
    {
    dir = direction(i);
    printDirection (dir);
    }
    return 0;
}

void printDirection (direction dir)
{
    switch (dir)
    {
    case north:
        cout << "NORTH" << endl;
        break;
    case east:
        cout << "EAST" << endl;
        break;
    case south:
        cout<< "SOUTH" << endl;
        break;
    case west:
        cout<<"WEST" << endl;
        break;
    }
}
