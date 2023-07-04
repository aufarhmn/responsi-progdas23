#include <iostream>
using namespace std;

const int SIZE = 3;

void inputMatrix(int matrix[][SIZE]);
void displayLowerTriangle(int matrix[][SIZE]);
void displayUpperTriangle(int matrix[][SIZE]);
void displayDiagonal(int matrix[][SIZE]);

int main() {
    int matrix[SIZE][SIZE];

    cout << "Masukkan elemen matriks:\n";
    inputMatrix(matrix);

    cout << "\nMatriks Segitiga Bawah:\n";
    displayLowerTriangle(matrix);

    cout << "\nMatriks Segitiga Atas:\n";
    displayUpperTriangle(matrix);

    cout << "\nMatriks Diagonal:\n";
    displayDiagonal(matrix);

    return 0;
}

void inputMatrix(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << "Masukkan elemen matriks [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayLowerTriangle(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void displayUpperTriangle(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = i; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void displayDiagonal(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
