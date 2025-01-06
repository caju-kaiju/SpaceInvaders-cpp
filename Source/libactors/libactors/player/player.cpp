#include <iostream>
#include <libactors/player/player.hpp>
#include "raylib.h"

Player::Player() : pos({.x = 0.0f, .y = 0.0f}), size{.x = 0.0f, .y = 0.0f} {}
Player::Player(Vector2 position, Vector2 size) : pos{position}, size{size} {}

// Actor
void Player::move_by(const Vector2& movement) {
    this->pos.x += movement.x;
    this->pos.y += movement.y;
}

void Player::yell() {
    std::cout << "Player: YELL!\n";
}

// Renderable
void Player::render() {
    DrawRectangleV(this->pos, this->size, RAYWHITE);
}

