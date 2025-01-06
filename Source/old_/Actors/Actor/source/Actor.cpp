#include <iostream>
#include "Actor/Actor.hpp"

void Actor::move_by(Vector2 vec) {
    // Default implementation does nothing
    std::cout << "Base move_by called\n";
}

void Actor::yell() {
    // Default implementation does nothing
    std::cout << "Base yell called\n";
}
