#include <curses.h>
using namespace std;

int fungsi(int a){
    return a;
}

int main(){
    initscr();
    printw("hello");
    refresh();
    getch();
    endwin();
}