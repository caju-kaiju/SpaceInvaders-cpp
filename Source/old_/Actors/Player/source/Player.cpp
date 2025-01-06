#include <iostream>
#include "Player/Player.hpp"
#include "raylib.h"

Player::Player() : pos{{.x = 0.0f, .y = 0.0f}}, size{.x = 0.0f, .y = 0.0f} {}
Player::Player(Position position, Vector2 size) : pos{position}, size{size} {}

// Actor
void Player::move_by(Vector2 movement) {
    this->pos.coords.x += movement.x;
    this->pos.coords.y += movement.y;
}

void Player::yell() {
    std::cout << "Player: YELL!\n";
}

// Renderable
void Player::render() {
    DrawRectangleV(this->pos.coords, this->size, RAYWHITE);
}
