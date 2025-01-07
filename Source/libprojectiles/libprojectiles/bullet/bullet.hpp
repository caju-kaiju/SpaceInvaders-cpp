#ifndef LIBPROJECTILE_BULLET_HPP
#define LIBPROJECTILE_BULLET_HPP

#include <libprojectiles/projectile/projectile.hpp>
#include "raylib.h"

struct Bullet : public Projectile {
    Bullet();
    Bullet(Vector2 location, Vector2 speed);

    virtual void move() override;

    Vector2 location;
    Vector2 speed;
};

#endif // LIBPROJECTILE_BULLET_HPP
