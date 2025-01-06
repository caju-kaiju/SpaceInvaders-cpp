#include <libcommands/commandmove/commandmove.hpp>
#include <libcommands/commandyell/commandyell.hpp>
#include <libhandlers/inputhandler/inputhandler.hpp>
#include "raylib.h"

InputHandler::InputHandler()
: button_left(new CommandMove({.x = -2.0f, .y = 0.0f}))
, button_right(new CommandMove({.x = +2.0f, .y = 0.0f}))
, button_up(new CommandYell) {

}

Command* InputHandler::handle_input() {
    if (IsKeyDown(KEY_LEFT)) return this->button_left;
    if (IsKeyDown(KEY_RIGHT)) return this->button_right;
    if (IsKeyDown(KEY_UP)) return this->button_up;

    return nullptr;
}
