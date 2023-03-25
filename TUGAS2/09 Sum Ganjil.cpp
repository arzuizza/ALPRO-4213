#include <iostream>
using namespace std;

int sumOdd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Jumlah bilangan ganjil dalam array: " << sumOdd(arr, n) << endl;
    return 0;
}

