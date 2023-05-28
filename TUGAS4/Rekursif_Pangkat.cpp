#include <iostream>

using namespace std;

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main() {
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan pangkat: ";
    cin >> bilangan2;

    int hasil = pangkat(bilangan1, bilangan2);

    cout << "Hasil pangkat: " << hasil << endl;

    cout << "Nama: Arzu" << endl;
    cout << "NIM: 14491" << endl;

    return 0;
}
