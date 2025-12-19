#include <iostream>
using namespace std;

int main() {
    int matriks[100][100];
    int jum_baris, jum_kolom, i, j;

    cout << "Input Jumlah Baris Matriks : ";
    cin >> jum_baris;

    cout << "Input Jumlah Kolom Matriks : ";
    cin >> jum_kolom;

    for (i = 0; i < jum_baris; i++) {
        for (j = 0; j < jum_kolom; j++) {
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << " = ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    cout << "Hasil Matriks:" << endl;

    for (i = 0; i < jum_baris; i++) {
        for (j = 0; j < jum_kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
