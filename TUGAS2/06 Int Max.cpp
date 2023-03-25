#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int nom1 = 10, nom2 = 20;
    cout << "Nilai maksimumnya adalah " << max(nom1, nom2) << endl;
    return 0;
}
