#include <iostream>
using namespace std;

int main()
{
    double x, sum = 0;
    cin >> x;
    while (x != -1)
    {
        sum += x;
        cin >> x;
    }
    cout << sum << endl;

    return 0;
}
