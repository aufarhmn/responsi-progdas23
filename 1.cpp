#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    int sum = 0;
    int digit;
    int temp = n;

    // Menampilkan setiap digit, dimulai dengan digit paling kanan
    while (temp > 0) {
        digit = temp % 10;
        cout << "Digit: " << digit << endl;
        sum += digit;
        temp /= 10;
    }

    // Memeriksa apakah bilangan habis dibagi 9
    if (sum % 9 == 0) {
        cout << "Bilangan habis dibagi 9" << endl;
    } else {
        cout << "Bilangan tidak habis dibagi 9" << endl;
    }

    return 0;
}
