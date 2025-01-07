#ifndef LIBACTOR_HPP
#define LIBACTOR_HPP

#include "raylib.h"

struct Actor {
    virtual ~Actor() {}
    virtual void move_by(const Vector2& vec);
    virtual void yell();
    virtual void shoot();
};

#endif // LIBACTOR_HPP
