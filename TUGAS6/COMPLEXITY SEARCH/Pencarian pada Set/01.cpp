#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> mySet = {10, 5, 8, 3, 2};
    int key = 8;

    set<int>::iterator it = mySet.find(key);

    if (it != mySet.end()) {
        cout << "Elemen ditemukan" << endl;
    } else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    return 0;
}
