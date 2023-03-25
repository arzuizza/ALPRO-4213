#include <iostream>
using namespace std;

bool isFound(int arr[], int n, int x) {
    for(int i = 0; i < n; ++i) {
        if(arr[i] == x)
            return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    if(isFound(arr, n, x))
        cout << x << " ditemukan dalam array\n";
    else
        cout << x << " tidak ditemukan dalam array\n";
    return 0;
}
