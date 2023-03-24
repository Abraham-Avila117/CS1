#include <iostream>

using namespace std;

int main()
{
    int x=4, y=5, z=11;
    while (z%3 != 0 && z < 50)
    {
        cout << z << ' ';
        z += 7;
    }
    cout << endl;
    return 0;
}
