#include <iostream>
using namespace std;

// fungsi kuadrat
int kuadrat(int x) {
    return x * x;
}

// fungsi kubik
int kubik(int x) {
    return x * x * x;
}

// fungai faktorial
int faktorial(int x) {
    int hasil = 1;
    for(int f = 1; f <= x; f++) {
        hasil *= f;
    }
    return hasil;
}

int main() {
    int x;
    // memasukkan bilangan bulat
    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    // mengeluarkan hasil fungsi
    cout << "Hasil kuadrat dari " << x << " = " << kuadrat(x) << endl;
    cout << "Hasil kubik dari " << x << " = " << kubik(x) << endl;
    cout << "Hasil faktorial dari " << x << " = " << faktorial(x) << endl;

    return 0;
}
