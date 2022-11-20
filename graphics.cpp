#include "graphics.h"

#define CUBE_SIZE 1

#define TITLE_WINDOW_HEIGHT 1

int main() {
    initscr();
    noecho();
    cbreak();
    raw();
    clear();

    WINDOW *titleWin = NULL, *mainWin = NULL, *borderWin = NULL;

    // title window
    titleWin = newwin(TITLE_WINDOW_HEIGHT, COLS, 0, 0);
    // centered text
    wmove(titleWin, 0, (COLS/2) - 6);
    wattron(titleWin, A_BOLD);
    waddstr(titleWin, "Game of Life");
    wattroff(titleWin, A_BOLD);

    // main display border window
    borderWin = newwin(LINES - TITLE_WINDOW_HEIGHT, COLS, TITLE_WINDOW_HEIGHT, 0);
    box(borderWin, 0, 0);

    // main display window
    mainWin = newwin(LINES - TITLE_WINDOW_HEIGHT - 2, COLS - 2, TITLE_WINDOW_HEIGHT + 1, 1);
    int cursX = COLS/2, cursY = (LINES - TITLE_WINDOW_HEIGHT - 2) / 2;
    wmove(mainWin, cursY, cursX);

    //refresh all
    refresh();
    wrefresh(titleWin);
    wrefresh(borderWin);
    wrefresh(mainWin);

    std::vector<point> square = createRectangle(CUBE_SIZE, CUBE_SIZE, 0, 0, 0);

    return 0;
}

std::vector<point> createRectangle(float width, float height, float centre_x, float centre_y, float centre_z) {
    std::vector<point> rectangle(4);
    
    rectangle.push_back((point){centre_x-width/2, centre_y+height/2, centre_z});
    rectangle.push_back((point){centre_x-width/2, centre_y-height/2, centre_z});
    rectangle.push_back((point){centre_x+width/2, centre_y-height/2, centre_z});
    rectangle.push_back((point){centre_x+width/2, centre_y+height/2, centre_z});

    return rectangle;
}

std::vector<point> rotatePoints(std::vector<point> points) {

}

std::vector<point> transformPoints(std::vector<point> points) {

}

std::vector<point> scalePoints(std::vector<point> points) {

}