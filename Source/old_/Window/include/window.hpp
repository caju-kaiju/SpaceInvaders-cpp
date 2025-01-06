#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "raylib.h"

struct Window {
    unsigned int width;
    unsigned int height;
    Color color;

    Window();
    Window(unsigned int width, unsigned int height, Color color);
};

#endif // WINDOW_HPP
