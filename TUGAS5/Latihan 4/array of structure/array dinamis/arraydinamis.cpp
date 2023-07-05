    #include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string Nama;
    string Jurusan;
    int TahunLulus;
};

int main() {
    int SIZE = 4;
    Mahasiswa* mahasiswa = new Mahasiswa[SIZE];

    mahasiswa[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    mahasiswa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    cout << "NIM\t\tNama\t\tJurusan\t\tTahun Lulus" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << mahasiswa[i].NIM << "\t" << mahasiswa[i].Nama << "\t" << mahasiswa[i].Jurusan << "\t" << mahasiswa[i].TahunLulus << endl;
    }

    delete[] mahasiswa;
    return 0;
}
