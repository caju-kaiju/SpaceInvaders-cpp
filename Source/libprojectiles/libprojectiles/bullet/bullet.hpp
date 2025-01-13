#ifndef LIBPROJECTILE_BULLET_HPP
#define LIBPROJECTILE_BULLET_HPP

#include <libprojectiles/projectile/projectile.hpp>
#include <librenderable/renderable.hpp>
#include "raylib.h"

struct Bullet : public Projectile {
    Bullet();
    Bullet(Vector2 pos, Vector2 speed);

    // Projectile
    virtual void move() override;
    void render() override;

    Vector2 pos;
    Vector2 speed;
    Vector2 size;
};

#endif // LIBPROJECTILE_BULLET_HPP
