#ifndef LIBCOMMAND_HPP
#define LIBCOMMAND_HPP

struct Actor;

struct Command {
    virtual ~Command();
    virtual void execute(Actor& actor);
};

#endif // LIBCOMMAND_HPP
