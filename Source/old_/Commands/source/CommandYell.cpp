#include "CommandYell.hpp"
#include "Actor/Actor.hpp"

CommandYell::CommandYell() {}

void CommandYell::execute(Actor& actor) {
    actor.yell();
}
