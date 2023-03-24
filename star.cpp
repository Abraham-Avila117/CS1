#include <iostream>
#include <fstream>
using namespace std;
void printStars();

int main()
{
    cout << "Before function call.\n" << endl;
    printStars();
    cout << "\nAfter function call." << endl;

    return 0;
}

void printStars ()
{
    int stars;
    cout << "Inside printStars.\n" << endl;
    cout << "How many stars to print?: ";
    cin >> stars;

    for (int i=0; i<stars; i++)
        cout << '*';
    cout << endl;
}
