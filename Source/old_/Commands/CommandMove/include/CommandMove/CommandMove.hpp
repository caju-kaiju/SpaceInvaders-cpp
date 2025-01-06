#ifndef COMMAND_MOVE_HPP
#define COMMAND_MOVE_HPP

#include "raylib.h"
#include "Command/Command.hpp"

struct Actor;

struct CommandMove : public Command {
    CommandMove();
    CommandMove(float x, float y);
    CommandMove(Vector2 location);

    virtual void execute(Actor& actor) override;

    Vector2 movement;
};

#endif // COMMAND_MOVE_HPP
