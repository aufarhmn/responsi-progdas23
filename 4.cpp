#include <iostream>
#include <algorithm>
using namespace std;

struct BOOKS {
    string bookName;
    string authorName;
    int year;
    long cost;
};

void getData(BOOKS book[]);
bool compareBooks(BOOKS a, BOOKS b);
void showData(BOOKS book[]);

int main() {
    cout << "============== MY FAVORITE BOOKS ==============" << endl;
    cout << " \n=> Enter your Five Favorite Books Detail: " << endl;

    BOOKS book[5];
    getData(book);

    sort(book, book + 5, compareBooks);
    showData(book);

    return 0;
}

void getData(BOOKS book[]) {
    for (int i = 0; i < 5; i++) {
        cout << "\n Enter Name of Book #" << i + 1 << ": " << endl;
        cin >> book[i].bookName;
        cout << " Enter Author Name: " << endl;
        cin >> book[i].authorName;
        cout << " Enter Published Year of Book: " << endl;
        cin >> book[i].year;
        cout << " Enter cost of Book: " << endl;
        cin >> book[i].cost;
    }
}

void showData(BOOKS book[]) {
    cout << " \n\n=============== Favorite Books Record:=============== " << endl;
    cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ") Book Name: " << book[i].bookName << " ( " << book[i].year << " ) " << endl;
        cout << " Author Name: " << book[i].authorName << endl;
        cout << " Book cost: " << book[i].cost << endl;
        cout << "\n";
    }
}

bool compareBooks(BOOKS a, BOOKS b) {
    if (a.cost < b.cost) {
        return true;
    }
    return false;
}
