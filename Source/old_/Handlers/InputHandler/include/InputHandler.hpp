#ifndef INPUT_HANDLER_HPP
#define INPUT_HANDLER_HPP

class Command;

struct InputHandler {
    InputHandler();
    Command* handle_input();

    Command* button_left;
    Command* button_right;
    Command* button_up;
};

#endif // INPUT_HANDLER_HPP
