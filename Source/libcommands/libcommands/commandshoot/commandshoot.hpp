#ifndef LIBCOMMAND_SHOOT_HPP
#define LIBCOMMAND_SHOOT_HPP

#include <libcommands/command/command.hpp>

struct Actor;

struct CommandShoot : public Command {
    CommandShoot();

    virtual void execute(Actor& actor) override;
};

#endif // LIBCOMMAND_SHOOT_HPP
