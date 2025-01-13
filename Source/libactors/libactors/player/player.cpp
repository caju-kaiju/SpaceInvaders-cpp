#include <iostream>
#include <libprojectiles/projectile_manager/projectile_manager.hpp>
#include <libprojectiles/bullet/bullet.hpp>
#include <libactors/player/player.hpp>
#include "raylib.h"

Player::Player()
: pos({.x = 0.0f, .y = 0.0f})
, size{.x = 0.0f, .y = 0.0f}
, projectile_manager{nullptr} {}

Player::Player(Vector2 position, Vector2 size, ProjectileManager* manager)
: pos{position}
, size{size}
, projectile_manager{manager} {}

// Actor
void Player::move_by(const Vector2& movement) {
    this->pos.x += movement.x;
    this->pos.y += movement.y;
}

void Player::yell() {
    std::cout << "Player: YELL!\n";
}

void Player::shoot() {
    if (!this->projectile_manager) return;

    this->projectile_manager->add_projectile(new Bullet({
        {.x = this->pos.x + this->size.x / 2.0f, .y = this->pos.y - 5.0f},
        {.x = 0.0f, .y = -3.0f}
    }));
}

// Renderable
void Player::render() {
    DrawRectangleV(this->pos, this->size, RAYWHITE);
}

