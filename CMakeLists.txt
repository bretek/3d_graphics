cmake_minimum_required(VERSION 3.1)

project(3d_graphics)

add_executable(3d_graphics graphics.cpp)

# link ncurses
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIRS})
target_link_libraries(3d_graphics ${CURSES_LIBRARIES})
