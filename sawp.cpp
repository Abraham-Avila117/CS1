#include <iostream>
using namespace std;
void fSwap(char, char);

int main()
{
    char num1, num2;

    cout << "Enter value 1: ";
    cin >> num1;
    cout << "Enter value 2: ";
    cin >> num2;

    fSwap(num1, num2);

    return 0;
}

void fSwap(char num1, char num2)
{
    cout << "Before the swap:"
    << "\nValue 1: " << num1
    << "\nValue 2: " << num2 << endl;

    cout << "After the swap:"
    << "\nValue 1: " << num2
    << "\nValue 2: " << num1 << endl;

}
