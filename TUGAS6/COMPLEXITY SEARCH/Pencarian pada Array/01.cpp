#include <iostream>
using namespace std;

int searchArray(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Mengembalikan indeks jika elemen ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {10, 5, 8, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int result = searchArray(arr, n, key);

    if (result != -1) {
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    return 0;
}
n
