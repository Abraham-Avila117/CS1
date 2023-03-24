#include <iostream>
#include <fstream>
using namespace std;
int getAge();

int main()
{
    int age;

    cout << "Enter your age: ";
    cout << "\nAre you really " << getAge() << " years old?\n" <<
    "or did you make a mistake?" << endl;


    return 0;
}

int getAge()
{
    int age;

    age = -1;
    while ((age > 120) || (age < 0))
    {

    cin >> age;

    if (age > 120)
    cerr << "How are you still alive!?";
    else if (age < 0)
    cerr << "How's it up there?";

    }

    return age;
}
