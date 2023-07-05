#include <iostream>
#include <vector>
using namespace std;

int searchVector(vector<int>& vec, int key) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == key) {
            return i;  // Mengembalikan indeks jika elemen ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    vector<int> vec = {10, 5, 8, 3, 2};
    int key = 8;

    int result = searchVector(vec, key);

    if (result != -1) {
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    return 0;
}

