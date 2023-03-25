#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    cout << "Sebelum ditukar: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "Setelah ditukar: x = " << x << ", y = " << y << endl;
    return 0;
}
