#include <ncurses\ncurses.h>
#include <string>
using namespace std;

int main() {
    int x = 10, y = 10; // posisi awal teks
    int ch;

    // Inisialisasi ncurses
    initscr(); // Memulai mode ncurses

    // Mengaktifkan mode input mentah (menerima input apa adanya)
    raw();

    // Mengaktifkan penangkapan tombol khusus seperti panah
    keypad(stdscr, TRUE);

    // Mencegah karakter yang ditekan muncul di layar
    noecho();

    // Instruksi awal
    mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'x' untuk keluar.");

    // Loop untuk menangani input dan pergerakan
    while((ch = getch()) != 'x') {
        // Membersihkan layar setiap kali pergerakan terjadi
        clear();
        refresh();

        mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'x' untuk keluar.");

        // Memeriksa tombol yang ditekan dan memperbarui posisi
        switch(ch) {
            case KEY_UP:
                y = (y > 0) ? y - 1 : y; // Mencegah keluar dari batas atas
                break; // Bergerak ke atas
            case KEY_DOWN:
                y = (y < LINES - 1) ? y + 1 : y; // Mencegah keluar dari batas bawah
                break; // Bergerak ke bawah
            case KEY_LEFT:
                x = (x > 0) ? x - 1 : x; // Mencegah keluar dari batas kiri
                break; // Bergerak ke kiri
            case KEY_RIGHT:
                x = (x < COLS - 1) ? x + 1 : x; // Mencegah keluar dari batas kanan
                break; // Bergerak ke kanan
        }

        // Debugging
        string xTemp = to_string(x);
        string yTemp = to_string(y);
        string chTemp = to_string(ch);

        mvprintw(1, 0, "x : ");
        mvprintw(1, 4, xTemp.c_str());

        mvprintw(2, 0, "y : ");
        mvprintw(2, 4, yTemp.c_str());

        mvprintw(3, 0, "in : ");
        mvprintw(3, 4, chTemp.c_str());

        // Menampilkan 'X' pada posisi (y,x)
        mvprintw(y, x, "X");

        // Meng-update tampilan
        refresh();
    }

    // Mengakhiri mode ncurses
    endwin();

    return 0;
}
