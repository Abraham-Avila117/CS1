#include <iostream>
#include <iomanip>

using namespace std;

int input(int&);
double BookInfo(int);
double reducePrice(double, int);

struct bookInfo{
    char title[50];
    char author[30];
    double price;
};

int main()
{
    int bookNum;
    double deduct;
    int percent;

    input(bookNum);
    deduct = BookInfo(bookNum);
    reducePrice(deduct, percent);

    return 0;
}

int input(int& bookNum)
{
    cout << "Enter value (book1 = 1 and book2 = 2): ";
    cin >> bookNum;

    return bookNum;
}

double BookInfo(int bookNum)
{
    double deduct;

    bookInfo myBook1 = {"The Da Vinci Code", "Dan Brown", 24.24};
    bookInfo myBook2 = {"Digital Fortress", "Dan Brown", 14.78};

    switch (bookNum)
    {
    case 1:
        cout << myBook1.title << " | " << myBook1.author << " | " << myBook1.price << endl;
        deduct = myBook1.price;
        break;
    case 2:
        cout << myBook2.title << " | " << myBook2.author << " | " << myBook2.price << endl;
        deduct = myBook2.price;
        break;
    }

    return deduct;
}

double reducePrice(double deduct, int percent)
{
    double total;

    bookInfo myBook1 = {"The Da Vinci Code", "Dan Brown", 24.24};
    bookInfo myBook2 = {"Digital Fortress", "Dan Brown", 14.78};

    cout << "the price of the book chosen is $" << deduct << ". what percentage would you like to reduce the price by? ";
    cin >> percent;

    total = double(percent)/100;
    total *= deduct;
    total = deduct - total;

    cout << fixed << showpoint << setprecision(2);
    cout << "total is " << total;

    if (total == myBook1.price)
        cout << total << " is the same as " << myBook1.price;
    else if (total == myBook2.price)
        cout << total << " is the same as " << myBook2.price;
    else
        cout << "\nI'll buy your entire stock!\n";


    return total;
}
