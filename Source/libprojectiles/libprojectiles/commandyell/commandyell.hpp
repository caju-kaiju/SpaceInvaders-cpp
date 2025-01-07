#ifndef LIBCOMMAND_YELL_HPP
#define LIBCOMMAND_YELL_HPP

#include <libcommands/command/command.hpp>

struct Actor;

struct CommandYell : public Command {
    CommandYell();

    virtual void execute(Actor& actor) override;
};

#endif // LIBCOMMAND_YELL_HPP
