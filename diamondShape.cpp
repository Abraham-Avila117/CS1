#include <iostream>
using namespace std;

void printPattern(int, char);

int main ()
{
    int pattern_size;
    char pattern_char;

    cout << "How big do you want this diamond shape? \n";
    cin >> pattern_size;
    cout << "Which character would you like to use? ";
    cin >> pattern_char;

    printPattern(pattern_size, pattern_char);
    overideChar(pattern_size, '/');

    return 0;
}

void printPattern(int pattern_size,char pattern_char)
{
        for (int r = 0; r < pattern_size; r++)
        {
            for (int c = r; c < pattern_size; c++)
            cout << pattern_char;

    for (int c = pattern_size-r; c < pattern_size; c++)
        cout << ' ';

    for (int c = pattern_size-r; c < pattern_size; c++)
        cout << ' ';

    for (int c = r; c < pattern_size; c++)
        cout << pattern_char;
    cout << endl;
        }
        //bottom half
    for (int r = 1; r <= pattern_size; r++)
        {
            for (int c = 0; c < r; c++)
            cout << pattern_char;

    for (int c = r; c < pattern_size; c++)
        cout << ' ';

    for (int c = r; c < pattern_size; c++)
        cout << ' ';

    for (int c = 0; c < r; c++)
        cout << pattern_char;
    cout << endl;
    }

    cout << endl;
}

void overideChar()
{
            for (int r = 0; r < pattern_size; r++)
        {
            for (int c = r; c < pattern_size; c++)
            cout << pattern_char;

    for (int c = pattern_size-r; c < pattern_size; c++)
        cout << ' ';

    for (int c = pattern_size-r; c < pattern_size; c++)
        cout << ' ';

    for (int c = r; c < pattern_size; c++)
        cout << pattern_char;
    cout << endl;
        }
        //bottom half
    for (int r = 1; r <= pattern_size; r++)
        {
            for (int c = 0; c < r; c++)
            cout << pattern_char;

    for (int c = r; c < pattern_size; c++)
        cout << ' ';

    for (int c = r; c < pattern_size; c++)
        cout << ' ';

    for (int c = 0; c < r; c++)
        cout << pattern_char;
    cout << endl;
    }

    cout << endl;
}

void overideSize()
{

}

void overideBoth()
{

}
