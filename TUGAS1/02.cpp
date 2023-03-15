#include <iostream>

using namespace std;

int kurang(int bilangan1, int bilangan2)
{
    int hasil = bilangan1 - bilangan2;
    return hasil;
}

int main()
{
    int angka1, angka2, hasil;

    cout << "Masukkan bilangan pertama: ";
    cin >> angka1;

    cout << "Masukkan bilangan kedua: ";
    cin >> angka2;

    hasil = kurang(angka1, angka2);

    cout << "Hasil pengurangan: " << hasil << endl;

    return 0;
}
