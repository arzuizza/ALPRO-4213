#include <iostream>

bool isOdd(int number) {
    if (number % 2 == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    std::cout << "Masukkan sebuah bilangan: ";
    std::cin >> num;

    if (isOdd(num)) {
        std::cout << num << " adalah bilangan ganjil" << std::endl;
    } else {
        std::cout << num << " adalah bilangan genap" << std::endl;
    }

    return 0;
}
