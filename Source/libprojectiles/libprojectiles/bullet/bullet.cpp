#include <libprojectiles/bullet/bullet.hpp>
#include "raylib.h"

Bullet::Bullet() : pos({.x = 0.0f, .y = 0.0f}), speed({.x = 0.0f, .y = 0.0f}), size({.x = 5.0f, .y = 5.0f}) {}
Bullet::Bullet(Vector2 pos, Vector2 speed) : pos(pos), speed(speed), size({.x = 5.0f, .y = 15.0f}) {}

void Bullet::move() {
    this->pos.x += speed.x;
    this->pos.y += speed.y;
}

void Bullet::render() {
    DrawRectangleV(this->pos, this->size, RED);
}
