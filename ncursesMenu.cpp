#include <ncurses/curses.h>
#include <string>
#include <windows.h>

using namespace std;

void print_menu(WINDOW *menu_win, int pilihanTerpilih, const char *opsi[], int jumlahOpsi);

int main(){
    initscr();
    clear();
    noecho();
    cbreak();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK); // inisialisasi warna, kuning = teks, black = background

    int awalX = 0, awalY = 0;
    int lebar = 20, tinggi = 6;

    WINDOW *menu_win = newwin(tinggi, lebar, awalY, awalX);
    keypad(menu_win, TRUE);


    const char *opsi[] = {
        "Info",
        "Option 2",
        "Option 3",
        "Exit"
    };

    int jumlahOpsi = sizeof(opsi) / sizeof(opsi[0]);
    int pilihanTerpilih = 0;
    int pilihan = -1;

    while(1){
        print_menu(menu_win, pilihanTerpilih, opsi, jumlahOpsi);
        int tombol = wgetch(menu_win);

        switch(tombol){
            case KEY_UP:
                if(pilihanTerpilih <= 0)
                    pilihanTerpilih = jumlahOpsi - 1;
                else
                    --pilihanTerpilih;
                break;

            case KEY_DOWN:
                if(pilihanTerpilih >= jumlahOpsi - 1)
                    pilihanTerpilih = 0;
                else
                    ++pilihanTerpilih;
                break;

            case 10: // tombol Enter
                pilihan = pilihanTerpilih;
                break;

            default:
                break;
        }

        if (pilihan == 0) {
            clear();
            int boxH = 10, boxW = 60, awalY = 8, awalX = 0;
            WINDOW *jendelaInfo = newwin(boxH, boxW, awalY, awalX);
            box(jendelaInfo, 0, 0);
            wrefresh(jendelaInfo);

            string teks1 = "Halo! ini adalah Program NCurses yang dibuat oleh Jilan Khafi, mahasiswa dari Universitas Lampung prodi Ilmu Komputer.";
            int startY = 1, startX = 1;
            int maxW = 54;
            int x = startX, y = startY;

            string kata = "";
            for (size_t i = 0; i <= teks1.length(); ++i) {
                if (i == teks1.length() || teks1[i] == ' ') {
                    if (x + kata.length() > maxW) {
                        y++;
                        x = startX;
                    }
                    for (char c : kata) {
                        mvwaddch(jendelaInfo, y, x++, c);
                        wrefresh(jendelaInfo);
                        Sleep(30);
                    }
                    kata = "";
                    x++;
                } else {
                    kata += teks1[i];
                }
                if (y >= boxH - 3) break;
            }

            wattron(jendelaInfo, COLOR_PAIR(1));
            mvwprintw(jendelaInfo, boxH -2, 1, "Press 'q' to return");
            wattroff(jendelaInfo, COLOR_PAIR(1));
            wrefresh(jendelaInfo);

            int ch;
            do {
                ch = wgetch(jendelaInfo);
            } while (ch != 'q' && ch != 'Q');

            werase(jendelaInfo);
            wrefresh(jendelaInfo);
            delwin(jendelaInfo);
            clear();
            refresh();

            pilihan = -1;
        }

        else if (pilihan == 1 || pilihan == 2) {
            clear();
            int boxH = 3;
            int boxW = 30;
            int awalY = 8;
            int awalX = 0;
            WINDOW *outputWin = newwin(boxH, boxW, awalY, awalX);
            box(outputWin, 0, 0);

            mvwprintw(outputWin, 1, 4, "You selected: %s", opsi[pilihan]);

            wrefresh(outputWin);
            Sleep(1000);
            delwin(outputWin);
            pilihan = -1;
            clear();
        }

        else if (pilihan == 3) { // input keluar menu
            clear();
            int boxH = 3, boxW = 30, awalY = 8, awalX = 0;
            WINDOW *jendelaKeluar = newwin(boxH, boxW, awalY, awalX);
            box(jendelaKeluar, 0, 0);
            wrefresh(jendelaKeluar);

            const char animasi[] = {'|', '/', '-', '\\'};
            int Loading = 32; // berapa lama loadingnya

            for (int i = 0; i < Loading; ++i) {
                werase(jendelaKeluar);
                box(jendelaKeluar, 0, 0);
                wattron(jendelaKeluar, COLOR_PAIR(1));
                mvwprintw(jendelaKeluar, 1, 6, "Exiting program %c", animasi[i % 4]);
                wattroff(jendelaKeluar, COLOR_PAIR(1));
                wrefresh(jendelaKeluar);
                Sleep(150);
            }

            werase(jendelaKeluar);
            box(jendelaKeluar, 0, 0);
            wattron(jendelaKeluar, COLOR_PAIR(1));
            mvwprintw(jendelaKeluar, 1, 7, "Exit complete!");
            wattroff(jendelaKeluar, COLOR_PAIR(1));
            wrefresh(jendelaKeluar);

            Sleep(1000);
            werase(jendelaKeluar);
            wrefresh(jendelaKeluar);
            delwin(jendelaKeluar);
            clear();
            refresh();
            break;
        }
    }
    clrtoeol();
    refresh();
    endwin();
    return 0;
}

void print_menu(WINDOW *menu_win, int pilihanTerpilih, const char *opsi[], int jumlahOpsi){
    box(menu_win, 0, 0);
    for (int i = 0; i < jumlahOpsi; ++i){
        if (i == pilihanTerpilih){
            wattron(menu_win, A_REVERSE);
            mvwprintw(menu_win, i + 1, 1, "%s", opsi[i]);
            wattroff(menu_win, A_REVERSE);
        } else {
            mvwprintw(menu_win, i + 1, 1, "%s", opsi[i]);
        }
    }
    wrefresh(menu_win);
}
