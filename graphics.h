#include <iostream>
#include <vector>
#include <ncurses.h>

struct point {
    float x;
    float y;
    float z;
};

std::vector<point> rotatePoints(std::vector<point> points);
std::vector<point> transformPoints(std::vector<point> points);
std::vector<point> scalePoints(std::vector<point> points);