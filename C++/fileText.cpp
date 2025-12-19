#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cinIsi;
    string namaFile = "textFile.txt";
    int pilihan;

    cout << "==========PROGRAM TEXT FILE==========" << endl;
    cout << "Apa yang ingin anda lakukan:\n";
    cout << "1. Menambah isi file\n";
    cout << "2. Menghapus isi dan menambahkan lagi\n";
    cout << "3. Lihat isi file\n";
    cout << "4. Keluar\n";
    cout << "Pilih opsi [1/2/3/4]: ";
    cin >> pilihan;
    cin.ignore();

    switch (pilihan) {
        case 1:
            {
            ofstream file;
            file.open(namaFile, ios::out | ios::app);
            cout << "Masukkan isi file:" << endl;
            getline(cin, cinIsi);
            file << cinIsi;
            file.close();
            break;
            }

        case 2:
            {
            ofstream file;
            file.open(namaFile, ios::out | ios::trunc);
            cout << "Masukkan isi file:" << endl;
            getline(cin, cinIsi);
            file << cinIsi;
            file.close();
            break;
            }
        
        case 3:
            {
            ifstream file(namaFile);
            if (!file.is_open()) {
                cout << "File tidak ditemukan!\n";
                return 1;
            }
            string baris;
            while (getline(file, baris)) {
            cout << baris << endl;
            }
            file.close();
            break;
            }
        
        case 4:
            {
            cout << "Selamat tinggal \n";
            break;
            }
        default:
            {
            cout << "Input tidak valid!\n";
            }
    }
    return 0;
}

