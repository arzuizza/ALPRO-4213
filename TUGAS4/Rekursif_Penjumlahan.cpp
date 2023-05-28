#include <iostream>

using namespace std;

int penjumlahan(int a, int b) {
    if (b > 0) {
        return 1 + penjumlahan(a, b - 1);
    } else if (a > 0) {
        return 1 + penjumlahan(a - 1, b);
    } else {
        return 0;
    }
}

int main() {
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    int hasil = penjumlahan(bilangan1, bilangan2);

    cout << "Hasil penjumlahan: " << hasil << endl;

    cout << "Nama: Arzu" << endl;
    cout << "NIM: 14491" << endl;

    return 0;
}
