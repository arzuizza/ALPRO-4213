#include <iostream>
using namespace std;

float findMax(float arr[], int n) {
    float maxVal = arr[0];
    for(int i = 1; i < n; ++i) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
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

    cout << endl << "Elemen terbesar = " << findMax(arr, n);

    return 0;
}
