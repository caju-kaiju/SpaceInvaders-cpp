#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Actor/Actor.hpp"
#include "renderable.hpp"
#include "position.hpp"
#include "raylib.h"

struct Player : public Actor, Renderable {
    Position pos;
    Vector2 size;

    Player();
    Player(Position position, Vector2 size);

    // Actor
    virtual void move_by(Vector2 movemnet) override;
    virtual void yell() override;

    // Renderable
    void render() override;
};

#endif // PLAYER_HPP
