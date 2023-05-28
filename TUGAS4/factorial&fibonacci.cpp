#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

// Fungsi rekursif untuk mencetak deret Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int angka;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    // Contoh pemanggilan fungsi faktorial
    cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;

    // Contoh pemanggilan fungsi Fibonacci
    cout << "Deret Fibonacci ke-" << angka << " adalah: ";
    for (int i = 0; i < angka; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
