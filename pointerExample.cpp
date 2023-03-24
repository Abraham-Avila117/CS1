#include <iostream>
#include
using namespace std;

int main()
{

    int x = 5;
    int *y = &x;

    cout << x << endl; // 5
    cout << *y << endl << endl; // 5
    cout << y << endl; //address of x (0x61fe14)
    cout << &x << endl; // 0x61fe14

    cout << 17%7 <<  endl;



    int num, sum;
    sum = 0;
cin >> num;

for (int j = 1; j <= 4; j++)

{

  sum = sum + num;

  cin >> num;

}

cout << sum << endl;



    return 0;
}
