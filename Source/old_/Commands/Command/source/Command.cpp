#include "Command/Command.hpp"

struct Actor;

Command::~Command() {}
void Command::execute(Actor& actor) {}
