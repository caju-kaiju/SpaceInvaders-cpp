#include <libwindow/window.hpp>
#include "raylib.h"

Window::Window() : width{800}, height{600}, color{BLACK} {}

Window::Window(int width, int height, Color color) :
    width{width}, height{height}, color{color} {}
