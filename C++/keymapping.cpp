#include <ncurses.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    initscr();

    char gerakan;
    int x = 5;
    int y = 5;

    move(y, x);
    mvprintw(y, x, ">");
    refresh();

    while (true)
    {
        gerakan = getch();

        switch (gerakan)
        {
        case 'a':
            if (x == 5 ){
            	
            }else{
                x-=1;
            }
            break;
        case 'd':
            if (x == 30){
            	
            }else{
                x+=1;
            }
            break;

        case 'w':
            if (y == 5){

            }else{
                y-=1;
            }
            break;

        case 's':
            if (y == 30){
                
            }else{
                y+=1;
            }
            break;
        }
        clear();
        move(y, x);
        mvprintw(y, x, ">");
        refresh();
    }
}
