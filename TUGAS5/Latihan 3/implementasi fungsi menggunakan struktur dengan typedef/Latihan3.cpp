#include <iostream>
using namespace std;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double radius;
} Lingkaran;

typedef struct {
    double radius;
    double tinggi;
} Kerucut;

typedef struct {
    double radius;
} Bola;

// Fungsi untuk menghitung luas persegi panjang
double hitungLuasPersegiPanjang(const PersegiPanjang& pp) {
    return pp.panjang * pp.lebar;
}

// Fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran(const Lingkaran& lingkaran) {
    return 3.14 * lingkaran.radius * lingkaran.radius;
}

// Fungsi untuk menghitung volume kerucut
double hitungVolumeKerucut(const Kerucut& kerucut) {
    return 0.33 * 3.14 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

// Fungsi untuk menghitung volume bola
double hitungVolumeBola(const Bola& bola) {
    return 1.33 * 3.14 * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang pp;
    pp.panjang = 5;
    pp.lebar = 3;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(pp);
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;

    Lingkaran lingkaran;
    lingkaran.radius = 7;

    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    cout << "Luas Lingkaran: " << luasLingkaran << endl;

    Kerucut kerucut;
    kerucut.radius = 4;
    kerucut.tinggi = 6;

    double volumeKerucut = hitungVolumeKerucut(kerucut);
    cout << "Volume Kerucut: " << volumeKerucut << endl;

    Bola bola;
    bola.radius = 5;

    double volumeBola = hitungVolumeBola(bola);
    cout << "Volume Bola: " << volumeBola << endl;

    return 0;
}

