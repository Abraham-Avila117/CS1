#include <iostream>
using namespace std;
float compareNum(float var1, float var2);

int main()
{
    float var1, var2;

    cout << "input two numbers to compare\n"
    << "Enter value 1: ";
    cin >> var1;
    cout << "Enter value 2: ";
    cin >> var2;
    compareNum(var1, var2);

    return 0;
}

float compareNum(float var1, float var2)
{
    if (var1>var2)
        cout << "\nYour first number " << var1 << " is greater than "
        << var2 << endl;
    else if (var2>var1)
        cout << "\nYour second number " << var2 << " is greater than "
        << var1 << endl;
    else
        cout << "Both numbers are the same";

    return var1-var2;
}
