#include <iostream>
using namespace std;

int main() {
    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
    cout << "Tanggal : " << tanggal[9] << endl;

    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << "Hari : " << hari[4] << endl;

    char namaP[] = {'A', 'f', 'i'};
    cout << "Nama panggilan (char) : " << namaP << endl;

    string namaL = "Jilan Khafi";
    cout << "Nama lengkap (string) : " << namaL << endl << endl;

    int i = 0;
    while (i < 7) {
        cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }

    cout << endl;

    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "Panjang array hari adalah : " << panjang << endl;
    cout << "Jilan begadang selama " << panjang << " hari." << endl << endl;

    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    cout << "Masukkan penjualan berapa porsi Nasi Goreng selama " << jumlahHari << " hari:" << endl;

    for (int j = 0; j < jumlahHari; j++) {
        cout << "Penjualan hari ke-" << hari[j] << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }

    rataRata = (float)totalPenjualan / jumlahHari;
    cout << "Total porsi Nasi Goreng yang telah terjual : " << totalPenjualan << " porsi." << endl;
    cout << "Rata-rata penjualan Nasi Goreng selama " << jumlahHari << " hari adalah : " << rataRata << " porsi." << endl << endl;

    int matriks[100][100];
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka kedai Nasi Goreng :" << endl;
    cout << "Input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;

    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << "Baris " << x + 1 << ", Kolom " << y + 1 << " = ";
            cin >> matriks[x][y];
        }
    }

    cout << "Kedai Nasi Goreng buka selama : " << jumlahBaris << " bulan di tanggal tertentu." << endl;

    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
