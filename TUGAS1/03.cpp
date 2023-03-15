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

int main()
{
    int n;
    cout << "Masukkan jumlah bilangan array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan bilangan arraynya(jaraknya gunakan spasi): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total = jumlahArray(arr, n);
    cout << "Jumlah array: " << total << endl;

    return 0;
}
