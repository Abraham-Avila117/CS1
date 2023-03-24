#include <iostream>

using namespace std;

struct bookInfo{
    char title[50];
    char author[30];
    double price;

};

int main()
{
    bookInfo myBook1 = {"The Da Vinci Code", "Dan Brown", 24.24};
    bookInfo myBook2 = {"Digital Fortress", "Dan Brown", 14.78};

    cout << myBook1.title << " | " << myBook1.author << " | " << myBook1.price << endl;
    cout << endl << myBook2.title << " | " << myBook2.author << " | " << myBook2.price << endl;

    return 0;
}
