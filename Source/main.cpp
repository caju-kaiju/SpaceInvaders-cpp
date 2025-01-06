#include <libwindow/window.hpp>
#include <libactors/player/player.hpp>
#include <libcommands/command/command.hpp>
#include <libhandlers/inputhandler/inputhandler.hpp>
#include "raylib.h"

// Globals
Window window{800, 1200, BLACK};
float player_width = static_cast<float>(window.width) / 20.0f;
float player_height = static_cast<float>(window.height) / 20.0f;
float player_pos_x = static_cast<float>(window.width) / 2.0f;
float player_pos_y = static_cast<float>(window.height) - player_height - 5.0f;

int main() {
    InitWindow(window.width, window.height, "Space Invaders!");
    SetTargetFPS(60);

    Command* command;
    InputHandler handler;
    Player player{{.x = player_pos_x, .y = player_pos_y}, {.x = player_width, .y = player_height}};

    while (!WindowShouldClose()) {
        command = handler.handle_input();
        if (command) {
            command->execute(player);
        }

        BeginDrawing();
        ClearBackground(window.color);
        player.render();
        EndDrawing();
    }
}

