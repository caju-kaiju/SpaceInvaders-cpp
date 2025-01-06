#ifndef COMMAND_YELL_HPP
#define COMMAND_YELL_HPP

#include "Command.hpp"

struct Actor;

struct CommandYell : public Command {
    CommandYell();

    virtual void execute(Actor& actor) override;
};

#endif // COMMAND_YELL_HPP
