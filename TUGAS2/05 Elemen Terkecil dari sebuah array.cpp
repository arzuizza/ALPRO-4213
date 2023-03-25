
#include <iostream>
using namespace std;

float findMin(float arr[], int n) {
    float min = arr[0];
    for(int i = 1; i < n; ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    float arr[100];

    cout << "Masukkan jumlah total elemen (1 hingga 100): ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; ++i) {
        cout << "Masukkan Angka " << i + 1 << " : ";
        cin >> arr[i];
    }

    float min = findMin(arr, n);
    cout << endl << "Elemen terkecil = " << min;

    return 0;
}
