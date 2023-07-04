#include <iostream>
using namespace std;

int main() {
    int jumlahTeman;
    cout << "Masukkan jumlah teman: ";
    cin >> jumlahTeman;

    double tagihanPerOrang;
    cout << "Masukkan tagihan per orang: ";
    cin >> tagihanPerOrang;

    int diskon;
    cout << "Masukkan persentase diskon: ";
    cin >> diskon;

    double diskonPercentage = diskon / 100.0;
    double totalDiskon = tagihanPerOrang * diskonPercentage;

    int temanKe = 1;
    while (temanKe <= jumlahTeman) {
        if (temanKe != 1) {
            tagihanPerOrang -= totalDiskon;
        }
        cout << "Tagihan teman ke-" << temanKe << ": " << tagihanPerOrang << endl;
        temanKe++;
    }

    return 0;
}
