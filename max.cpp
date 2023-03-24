#include<iostream>
using namespace std;

int main()
{
    int SIZE, max;

    cout << "Enter amount of value you would like to enter ";
    cin >> SIZE;

    int score[SIZE];

    cout << "Enter " << SIZE << " scores: \n";

    for (int i = 0; i < SIZE; i++)
        cin >> score[i];
    max = score[0];

    for (int i = 1; i < SIZE; i++)
        {
            if (score[i] > max)
            max = score[i];
    }
    cout << "Max score is: " << max << endl;

return 0;
}
