
#include <iostream>
using namespace std;

struct BangunDatar {
    double panjang;
    double lebar;
};

struct BangunRuang {
    double radius;
    double tinggi;
};

// Fungsi untuk menghitung luas persegi panjang
double hitungLuasPersegiPanjang(const BangunDatar& persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

// Fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran(double radius) {
    return 3.14 * radius * radius;
}

// Fungsi untuk menghitung volume kerucut
double hitungVolumeKerucut(const BangunRuang& kerucut) {
    return 0.33 * 3.14 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

// Fungsi untuk menghitung volume bola
double hitungVolumeBola(double radius) {
    return 1.33 * 3.14 * radius * radius * radius;
}

int main() {
    BangunDatar persegiPanjang;
    persegiPanjang.panjang = 5;
    persegiPanjang.lebar = 3;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(persegiPanjang);
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;

    double radiusLingkaran = 7;
    double luasLingkaran = hitungLuasLingkaran(radiusLingkaran);
    cout << "Luas Lingkaran: " << luasLingkaran << endl;

    BangunRuang kerucut;
    kerucut.radius = 4;
    kerucut.tinggi = 6;

    double volumeKerucut = hitungVolumeKerucut(kerucut);
    cout << "Volume Kerucut: " << volumeKerucut << endl;

    double radiusBola = 5;
    double volumeBola = hitungVolumeBola(radiusBola);
    cout << "Volume Bola: " << volumeBola << endl;

    return 0;
}
