#include <iostream>

using namespace std;

int pengurangan(int a, int b) {
    if (b > 0) {
        return pengurangan(a - 1, b - 1);
    } else if (a > 0) {
        return pengurangan(a - 1, b);
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

    int hasil = pengurangan(bilangan1, bilangan2);

    cout << "Hasil pengurangan: " << hasil << endl;

    cout << "Nama: Arzu" << endl;
    cout << "NIM: 14491" << endl;

    return 0;
}
