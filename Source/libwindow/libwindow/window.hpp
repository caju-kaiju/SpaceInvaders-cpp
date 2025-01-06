#ifndef LIBWINDOW_HPP
#define LIBWINDOW_HPP

#include "raylib.h"

struct Window {
    int width;
    int height;
    Color color;

    Window();
    Window(int width, int height, Color color);
};

#endif // LIBWINDOW_HPP
