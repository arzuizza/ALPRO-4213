#include <iostream>

using namespace std;

int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    int hasil = perkalian(bilangan1, bilangan2);

    cout << "Hasil perkalian: " << hasil << endl;

    cout << "Nama: Arzu" << endl;
    cout << "NIM: 14491" << endl;

    return 0;
}
