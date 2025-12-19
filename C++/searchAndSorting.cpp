#include <iostream>
using namespace std;

int main() {
    // Sequential Search
    string arr[] = {"Jilan", "Bintang", "Pandu", "Nabil", "Hiroba", "Habib"};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool find = false;

    string target = "Jilan";

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Nama " << arr[i] << " ditemukan pada Index ke-" << i;
            find = true;
            break;
        }
    }

    if (!find) {
        cout << "Data tidak ditemukan";
    }

    // Bubble Sort
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
