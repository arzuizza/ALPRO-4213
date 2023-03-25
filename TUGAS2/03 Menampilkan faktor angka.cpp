#include <iostream>
using namespace std;

void cariFaktor(int n) {
    cout << "Faktor dari " << n << " adalah: ";
    for(int i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    cariFaktor(n);

    return 0;
}
