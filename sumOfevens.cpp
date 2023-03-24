#include <iostream>

using namespace std;

int main()
{
    int num = 0, i = 0, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;
    while (i <= num)
    {
        sum += i;
        i += 2;
    }
    cout << "The sum of even numbers from 1 to " << num << " is " << sum << endl;

    return 0;
}
