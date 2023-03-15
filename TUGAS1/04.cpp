#include <iostream>

using namespace std;

int jumlahArray(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

double rataArray(int arr[], int n)
{
    double rata = 0;
    int total = jumlahArray(arr, n);
    rata = (double) total / n;
    return rata;
}

int main()
{
    int n;
    cout << "Masukkan jumlah bilangan array (contoh: 4): ";
    cin >> n;

    int arr[n];
    cout << "Masukkan bilangan arraynya (contoh: 3 1 4 5): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total = jumlahArray(arr, n);
    double rata = rataArray(arr, n);

    cout << "Jumlah array: " << total << endl;
    cout << "Rata-rata array: " << rata << endl;

    return 0;
}
