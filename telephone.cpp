#include <iostream>

using namespace std;

int main()
{
    char letter;
    char response;
    int noOfLetters;


    cout << "Enter Y/y to convert a telephone number: "
    << " From letters to digits.\n"
    << "or any other letter to exit" << endl;

    cin >> response;
    while (response == 'Y' || response == 'y')
    {
        cout << "Enter a telephone number using letters please: ";
        cin >> letter;
        cout << endl;
        noOfLetters = 0;

        cout << "The corresponding phone number is: \n";
            while (noOfLetters < 7)
            {

                noOfLetters++;
                switch (letter)
                {
                case 'a':
                case 'A':
                case 'b':
                case 'B':
                case 'c':
                case 'C':
                    cout << '2';
                    break;

                case 'd':
                case 'D':
                case 'e':
                case 'E':
                case 'f':
                case 'F':
                    cout << '3';
                    break;

                case 'g':
                case 'G':
                case 'h':
                case 'H':
                case 'i':
                case 'I':
                    cout << '4';
                    break;

                case 'j':
                case 'J':
                case 'k':
                case 'K':
                case 'l':
                case 'L':
                    cout << '5';
                    break;

                case 'm':
                case 'M':
                case 'n':
                case 'N':
                case 'o':
                case 'O':
                    cout << 6;
                    break;

                case 'p':
                case 'P':
                case 'q':
                case 'Q':
                case 'r':
                case 'R':
                case 's':
                case 'S':
                    cout << 7;
                    break;

                case 't':
                case 'T':
                case 'u':
                case 'U':
                case 'v':
                case 'V':
                    cout << 8;
                    break;

                case 'w':
                case 'W':
                case 'x':
                case 'X':
                case 'y':
                case 'Y':
                case 'z':
                case 'Z':
                    cout << 9;
            }
        if (noOfLetters == 3)

        cout << '-';
        cin >> letter;

        }
        cin.ignore(100, '\n');
        cout << "\nTo process another phone number enter Y/y"
        << "to convert it from letters to digits.\n"
        << "or any other letter to exit" << endl;
        cin >> response;
}


    return 0;
}
