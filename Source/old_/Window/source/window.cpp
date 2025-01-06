#include "raylib.h"
#include "window.hpp"

Window::Window() : width{800}, height{600}, color{BLACK} {}

Window::Window(unsigned int width, unsigned int height, Color color) :
    width{width}, height{height}, color{color} {}
