#include <iostream>
#include <libactors/actor/actor.hpp>

void Actor::move_by(const Vector2& vec) {
    // Default implementation does nothing
    std::cout << "Base move_by called\n";
}

void Actor::yell() {
    // Default implementation does nothing
    std::cout << "Base yell called\n";
}
