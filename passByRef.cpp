#include <iostream>
using namespace std;
void passByRef(int& x);

int main()
{
    int x = 12;
    passByRef(x);
    cout << "After calling passByRef\nx = "
    << x << endl;

    return 0;
}

void passByRef (int& x)
{
    x++;
    cout << "In passByRal\nx = " << x << endl;
}
