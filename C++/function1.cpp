#include <iostream>
using namespace std;

int main() {
    // segitiga atas

    // spasi
    for(int a = 0; a < 5; a++) {
        for(int b = 0; b < 5 - a; b++){
            cout << " ";
        }

    // bintang *
    for(int c = 0; c <= a; c++) {
        cout << "*";
    }
        cout << endl;
    }

    // segitiga bawah
    for(int d = 5; d >= 1; d--) {
        for(int e = 1; e <= d; e++) {
            cout << "*";
        }
        cout << endl;
    }

    // segitiga piramida
    for (int f = 1; f <= 5; f++) {
        // spasi
        for (int g = 1; g <= 5 - f; g++) {
            cout << " ";
        }
        // bintang *
        for (int h = 1; h <= (2 * f - 1); h++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
