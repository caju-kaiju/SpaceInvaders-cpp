#include <libactors/actor/actor.hpp>
#include <libcommands/commandshoot/commandshoot.hpp>

CommandShoot::CommandShoot() {}

void CommandShoot::execute(Actor& actor) {
    actor.shoot();
}
