#include <libactors/actor/actor.hpp>
#include <libcommands/commandyell/commandyell.hpp>

CommandYell::CommandYell() {}

void CommandYell::execute(Actor& actor) {
    actor.yell();
}
