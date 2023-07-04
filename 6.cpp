#include <iostream>
using namespace std;

struct movies_t {
    string title;
    int year;
};

const int NUM_MOVIES = 5;

void inputMovies(movies_t films[]);
void displayMovies(const movies_t films[]);

int main() {
    movies_t films[NUM_MOVIES];

    cout << "Enter your 5 favourite movies:\n";
    inputMovies(films);

    cout << "\nYou have entered these movies:\n";
    displayMovies(films);

    return 0;
}

void inputMovies(movies_t films[]) {
    for (int i = 0; i < NUM_MOVIES; i++) {
        cout << "Enter title: ";
        cin >> films[i].title;
        cout << "Enter year: ";
        cin >> films[i].year;
    }
}

void displayMovies(const movies_t films[]) {
    for (int i = 0; i < NUM_MOVIES; i++) {
        cout << i + 1 << " " << films[i].title;
        cout << " (" << films[i].year << ")\n";
    }
}
