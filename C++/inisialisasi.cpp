#include <iostream>
using namespace std;

int main() {
    // Input data diri
    string nama;
    string NPM;
    int umur;

    cout << "Masukkan nama: ";
    cin >> nama;

    cout << "Masukkan NPM: ";
    cin >> NPM;

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << endl;
    cout << "Nama : " << nama << endl;
    cout << "NPM  : " << NPM << endl;
    cout << "Umur : " << umur << endl;

    // Operasi aritmatika
    int a = 2;
    int b = 3;
    int c = a + b;

    cout << "Nilai a : " << a << endl;
    cout << "Nilai b : " << b << endl;
    cout << "Nilai c (a + b) : " << c << endl;

    a = a + b; // sama dengan a += b
    cout << "Nilai a setelah (a = a + b) : " << a << endl;

    return 0;
}
