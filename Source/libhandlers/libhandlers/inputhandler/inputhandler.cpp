#include <memory>
#include <libcommands/commandmove/commandmove.hpp>
#include <libcommands/commandyell/commandyell.hpp>
#include <libcommands/commandshoot/commandshoot.hpp>
#include <libhandlers/inputhandler/inputhandler.hpp>
#include "raylib.h"

InputHandler::InputHandler()
: button_left(std::make_unique<CommandMove>(Vector2{.x = -2.0f, .y = 0.0f}))
, button_right(std::make_unique<CommandMove>(Vector2{.x = +2.0f, .y = 0.0f}))
, button_up(std::make_unique<CommandYell>())
, button_space(std::make_unique<CommandShoot>()) {
}

Command* InputHandler::handle_input() {
    if (IsKeyDown(KEY_LEFT)) return this->button_left.get();
    if (IsKeyDown(KEY_RIGHT)) return this->button_right.get();
    if (IsKeyDown(KEY_UP)) return this->button_up.get();
    if (IsKeyDown(KEY_SPACE)) return this->button_space.get();


    return nullptr;
}
