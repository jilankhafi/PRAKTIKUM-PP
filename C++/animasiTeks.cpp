#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main(){
    initscr();

    start_color();
    init_pair(1, COLOR_WHITE, COLOR_RED); //teks putih, background merah
    init_pair(2, COLOR_RED, COLOR_WHITE); //teks merah, background putih

    attron(COLOR_PAIR(1));
    mvprintw(2, 2, "J");
    refresh();
    Sleep(500); //delay 0.5 detik

    attron(COLOR_PAIR(2));
    mvprintw(3, 2, "I");
    refresh();
    Sleep(1000); //delay 1 detik

    attron(COLOR_PAIR(1));
    mvprintw(4, 2, "L");
    refresh();
    Sleep(1500); //delay 1.5 detik

    attron(COLOR_PAIR(2));
    mvprintw(5, 2, "A");
    refresh();
    Sleep(500); //delay 0.5 detik

    attron(COLOR_PAIR(1));
    mvprintw(6, 2, "N");
    refresh();

    getch();
    endwin();

    return 0;
}
