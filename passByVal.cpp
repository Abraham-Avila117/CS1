#include <iostream>
#include <fstream>
using namespace std;
void passByVal(int);

int main()
{
    int x = 10;
    passByVal(x);
    cout << "After calling passByVal\nx = "
    << x << endl;

    return 0;
}

void passByVal (int x)
{
    x++;
    cout << "In passByVal\nx = " << x << endl;
}
