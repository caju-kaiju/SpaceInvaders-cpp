#include <algorithm>
#include "raylib.h"
#include "window.hpp"
#include "Player/Player.hpp"
// #include "Handlers/InputHandler/InputHandler.hpp"
#include "Handlers/InputHandler/include/InputHandler.hpp"
#include "Command/Command.hpp"
#include <iostream>

// Prototypes

// Globals
Window window{800, 600, BLACK};
float player_width = window.width / 20.0f;
float player_height = window.height / 20.0f;
float player_pos_x = window.width / 2.0f;
float player_pos_y = static_cast<float>(window.height) - player_height - 5.0f;

InputHandler input_handler;

int main() {
    InitWindow(window.width, window.height, "Space Invaders!");
    SetTargetFPS(60);

    Player player{Position{{.x = player_pos_x, .y = player_pos_y}}, {.x = player_width, .y = player_height}};

    Command* command;
    while (!WindowShouldClose()) {
        // process_input(player);
        command = input_handler.handle_input();
        if (command) {
            command->execute(player);
        }

        BeginDrawing();
        ClearBackground(window.color);
        player.render();
        EndDrawing();
    }
}

