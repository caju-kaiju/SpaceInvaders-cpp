#include <libcommands/command/command.hpp>

struct Actor;

Command::~Command() {}
void Command::execute(Actor& actor) {}
