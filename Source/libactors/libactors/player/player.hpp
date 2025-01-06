#ifndef LIBPLAYER_HPP
#define LIBPLAYER_HPP

#include <librenderable/renderable.hpp>
#include <libactors/actor/actor.hpp>
#include "raylib.h"

struct Player : public Actor, public Renderable {
    Vector2 pos;
    Vector2 size;

    Player();
    Player(Vector2 positon, Vector2 size);

    // Actor
    virtual void move_by(const Vector2& movemnet) override;
    virtual void yell() override;

    // Renderable
    void render() override;
};

#endif // LIBPLAYER_HPP
