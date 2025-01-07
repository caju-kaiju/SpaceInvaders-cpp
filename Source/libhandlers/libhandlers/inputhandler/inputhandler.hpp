#ifndef INPUT_HANDLER_HPP
#define INPUT_HANDLER_HPP

#include <memory>

class Command;

struct InputHandler {
    InputHandler();
    Command* handle_input();

    std::unique_ptr<Command> button_left;
    std::unique_ptr<Command> button_right;
    std::unique_ptr<Command> button_up;
    std::unique_ptr<Command> button_space;
};

#endif // INPUT_HANDLER_HPP
