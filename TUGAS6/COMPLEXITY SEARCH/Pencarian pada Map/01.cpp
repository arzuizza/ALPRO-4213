#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap = {{1, "John"}, {2, "Mary"}, {3, "David"}};
    int key = 2;

    map<int, string>::iterator it = myMap.find(key);

    if (it != myMap.end()) {
        cout << "Elemen ditemukan: " << it->second << endl;
    } else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    return 0;
}
