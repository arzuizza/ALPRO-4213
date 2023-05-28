#include <iostream>

using namespace std;

int pembagian(int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}

int main() {
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    int hasil = pembagian(bilangan1, bilangan2);

    cout << "Hasil pembagian: " << hasil << endl;

    cout << "Nama: Arzu" << endl;
    cout << "NIM: 14491" << endl;

    return 0;
}
