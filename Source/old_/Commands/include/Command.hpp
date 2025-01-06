#ifndef COMMAND_HPP
#define COMMAND_HPP

struct Actor;

struct Command {
    virtual ~Command() {}
    virtual void execute(Actor& actor) {};
};

#endif // COMMAND_HPP
