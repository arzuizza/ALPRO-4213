    #include <iostream>
    using namespace std;
    bool isOdd(int number) {
        if (number % 2 == 1) {
            return true;
        } else {
            return false;
        }
    }

    void cariFaktor(int n) {
        std::cout << "Faktor dari " << n << " adalah: ";
        for(int i = 1; i <= n; ++i) {
            if(n % i == 0)
                std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    float findMax(float arr[], int n) {
        float maxVal = arr[0];
        for(int i = 1; i < n; ++i) {
            if(arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    float findMin(float arr[], int n) {
        float min = arr[0];
        for(int i = 1; i < n; ++i) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }

    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int min(int a, int b) {
    return (a < b) ? a : b;
    }

    int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
   }

   int sumOdd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
   }

   void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
   }

   bool isFound(int arr[], int n, int x) {
    for(int i = 0; i < n; ++i) {
        if(arr[i] == x)
            return true;
    }
    return false;
    }


    void displayMenu() {
        std::cout << "==============================================" << std::endl;
        std::cout << "|    P I L I H  M E N U  A P L I K A S I     |" << std::endl;
        std::cout << "|--------------------------------------------|" << std::endl;
        std::cout << "|                                            |" << std::endl;
        std::cout << "| 1. Cek Bilangan Ganjil/Genap               |" << std::endl;
        std::cout << "| 2. Cari Faktor                             |" << std::endl;
        std::cout << "| 3. Elemen Terbesar dari sebuah array       |" << std::endl;
        std::cout << "| 4. Elemen Terkecil dari sebuah array       |" << std::endl;
        std::cout << "| 5. Int Max                                 |" << std::endl;
        std::cout << "| 6. Int Min                                 |" << std::endl;
        std::cout << "| 7. Sum Genab                               |" << std::endl;
        std::cout << "| 8. sum Ganjil                              |" << std::endl;
        std::cout << "| 9. Swap                                    |" << std::endl;
        std::cout << "| 10. Is Found                               |" << std::endl;
        std::cout << "| 11. Keluar                                 |" << std::endl;
        std::cout << "|                                            |" << std::endl;
        std::cout << "|--------------------------------------------|" << std::endl;
        std::cout << "==============================================" << std::endl;
    }

    int main() {
        int choice;

        do {
            displayMenu();
            std::cout << "Masukkan pilihan (1-11): ";
            std::cin >> choice;
            std::cout << std::endl;

            switch(choice) {
                case 1: {
                    int num;
                    std::cout << "Masukkan sebuah bilangan: ";
                    std::cin >> num;

                    if (isOdd(num)) {
                        std::cout << num << " adalah bilangan ganjil" << std::endl;
                    } else {
                        std::cout << num << " adalah bilangan genap" << std::endl;
                    }
                    break;
                }
                case 2: {
                    int n;
                    std::cout << "Masukkan bilangan bulat positif: ";
                    std::cin >> n;

                    cariFaktor(n);
                    break;
                }
                case 3: {
                    int n;
                    float arr[100];

                    std::cout << "Masukkan jumlah total elemen (1 hingga 100): ";
                    std::cin >> n;
                    std::cout << std::endl;

                    for(int i = 0; i < n; ++i) {
                        std::cout << "Masukkan Angka " << i + 1 << " : ";
                        std::cin >> arr[i];
                    }

                    std::cout << std::endl << "Elemen terbesar = " << findMax(arr, n) << std::endl;
                    break;
                }
                case 4: {
                    int n;
                    float arr[100];

                    cout << "Masukkan jumlah total elemen (1 hingga 100): ";
                    cin >> n;
                    cout << endl;

                    for(int i = 0; i < n; ++i) {
                        cout << "Masukkan Angka " << i + 1 << " : ";
                        cin >> arr[i];
                    }

                    float min = findMin(arr, n);
                    cout << endl << "Elemen terkecil = " << min;

                    break;
                }
                case 5: {
                    int nom1 = 10, nom2 = 20;
                    cout << "Nilai maksimumnya adalah " << max(nom1, nom2) << endl;
                    break;
                    }

                case 6:{
                    int nom1 = 10, nom2 = 20;
                    cout << "Nilai minimumnya adalah " << min(nom1, nom2) << endl;
                    break;

                }

                case 7: {
                    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
                    int size = sizeof(arr) / sizeof(arr[0]);
                    int sum = sumEven(arr, size);
                    cout << "Jumlah bilangan genap dalam array adalah: " << sum << endl;
                    break;
                }

                case 8: {
                    int arr[] = {1, 2, 3, 4, 5};
                    int n = sizeof(arr) / sizeof(arr[0]);
                    cout << "Jumlah bilangan ganjil dalam array: " << sumOdd(arr, n) << endl;
                    break;
                }

                case 9: {
                    int x = 5;
                    int y = 10;
                    cout << "Sebelum ditukar: x = " << x << ", y = " << y << endl;
                    swap(x, y);
                    cout << "Setelah ditukar: x = " << x << ", y = " << y << endl;
                    break;
                }

                case 10: {
                    int arr[] = {1, 2, 3, 4, 5};
                    int n = sizeof(arr)/sizeof(arr[0]);
                    int x = 3;
                    if(isFound(arr, n, x))
                        cout << x << " ditemukan dalam array\n";
                    else
                        cout << x << " tidak ditemukan dalam array\n";
                    break;
                }

                case 11: {
                        std::cout << "Keluar dari program." << std::endl;
                        return 0;
                        break;
                }

            }
        } while (choice != 11);

        return 0;
    }

//ARZU | 14491
