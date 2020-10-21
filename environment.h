#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_

#include <vector>
#include <array>

#include "constants.h"

// room object
class Room {
    public:
        // can be initialised with size
        Room(int y, int x, int w, int h) : y_(y), x_(x), width_(w), height_(h) {};
        // or empty
        Room();

        int GetY1();
        int GetX1();
        int GetY2();
        int GetX2();
        int GetHeight();
        int GetWidth();
        int GetArea();
    private:
        int y_, x_, width_, height_;
};

// tile struct
struct Tile {
    bool blocking;
    bool transparent;
    int lit_color_pair;
    int unlit_color_pair;
    char character;
    bool seen;
    bool lit;
};

typedef std::array<std::array<Tile, kMapWidth>, kMapHeight> map_type;

#endif
