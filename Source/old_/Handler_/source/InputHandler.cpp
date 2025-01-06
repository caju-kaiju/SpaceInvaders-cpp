#include "raylib.h"
#include "CommandMove/CommandMove.hpp"
#include "CommandYell/CommandYell.hpp"
#include "InputHandler.hpp"

InputHandler::InputHandler()
: button_left(new CommandMove({.x = -2.0f, .y = 0.0f}))
, button_right(new CommandMove({.x = +2.0f, .y = 0.0f}))
, button_up(new CommandYell) {

}

Command* InputHandler::handle_input() {
    // if (IsKeyDown(KEY_LEFT)) return std::optional<Command>(CommandMove({.x = -2.0f, .y = 0.0f}));
    // if (IsKeyDown(KEY_RIGHT)) return std::optional<Command>(CommandMove({.x = +2.0f, .y = 0.0f}));
    // if (IsKeyDown(KEY_UP)) return std::optional<Command>(CommandYell());
    if (IsKeyDown(KEY_LEFT)) return this->button_left;
    if (IsKeyDown(KEY_RIGHT)) return this->button_right;
    if (IsKeyDown(KEY_UP)) return this->button_up;

    return nullptr;
}
