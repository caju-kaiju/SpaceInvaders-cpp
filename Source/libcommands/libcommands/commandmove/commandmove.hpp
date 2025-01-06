#ifndef LIBCOMMAND_MOVE_HPP
#define LIBCOMMAND_MOVE_HPP

#include <libcommands/command/command.hpp>
#include "raylib.h"

struct Actor;

struct CommandMove : public Command {
    CommandMove();
    CommandMove(float x, float y);
    CommandMove(Vector2 location);

    virtual void execute(Actor& actor) override;

    Vector2 movement;
};

#endif // LIBCOMMAND_MOVE_HPP
