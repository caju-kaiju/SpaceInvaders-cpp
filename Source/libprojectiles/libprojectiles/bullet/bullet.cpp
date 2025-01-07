// Bullet();
//     Bullet(Vector2 location, Vector2 speed);
//
//     virtual void move() override;
//
//     Vector2 location;
//     Vector2 speed;

#include <libprojectiles/bullet/bullet.hpp>
#include "raylib.h"

Bullet::Bullet() : location({.x = 0.0f, .y = 0.0f}), speed({.x = 0.0f, .y = 0.0f}) {}
Bullet::Bullet(Vector2 location, Vector2 speed) : location(location), speed(speed) {}

void Bullet::move() {
    this->location.x += speed.x;
    this->location.y += speed.y;
}
