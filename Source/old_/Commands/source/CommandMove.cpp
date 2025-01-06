#include "CommandMove.hpp"
#include "Actor/Actor.hpp"

struct Vector2;

CommandMove::CommandMove() : movement({.x = 0.0f, .y = 0.0f}) {}
CommandMove::CommandMove(float x, float y) : movement({.x = x, .y = y}) {}
CommandMove::CommandMove(Vector2 location) : movement{location} {}

void CommandMove::execute(Actor& actor) {
    actor.move_by(this->movement);
}
