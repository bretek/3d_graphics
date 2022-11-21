#include "graphics.h"

#define CUBE_SIZE 1

#define TITLE_WINDOW_HEIGHT 1

int main() {
    initscr();
    noecho();
    cbreak();
    clear();

    WINDOW *titleWin = NULL, *mainWin = NULL, *borderWin = NULL;

    // title window
    titleWin = newwin(TITLE_WINDOW_HEIGHT, COLS, 0, 0);
    // centered text
    std::string titleText = "Cube";
    wmove(titleWin, 0, (COLS/2) - titleText.length()/2);
    wattron(titleWin, A_BOLD);
    waddstr(titleWin, titleText.c_str());
    wattroff(titleWin, A_BOLD);

    // main display border window
    borderWin = newwin(LINES - TITLE_WINDOW_HEIGHT, COLS, TITLE_WINDOW_HEIGHT, 0);
    box(borderWin, 0, 0);

    // main display window
    mainWin = newwin(LINES - TITLE_WINDOW_HEIGHT - 2, COLS - 2, TITLE_WINDOW_HEIGHT + 1, 1);

    //refresh all
    refresh();
    wrefresh(titleWin);
    wrefresh(borderWin);
    wrefresh(mainWin);

    char ch;
    while ((ch = getch()) != 'q') {
        continue;
    }

    endwin();

    return 0;
}