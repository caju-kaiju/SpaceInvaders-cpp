#ifndef ACTOR_HPP
#define ACTOR_HPP

#include "raylib.h"

struct Actor {
    virtual ~Actor() {}
    virtual void move_by(Vector2 vec);
    virtual void yell();
};

#endif // ACTOR_HPP
