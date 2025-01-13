#include <libwindow/window.hpp>
#include <libactors/player/player.hpp>
#include <libprojectiles/bullet/bullet.hpp>
#include <libcommands/command/command.hpp>
#include <libhandlers/inputhandler/inputhandler.hpp>
#include <libprojectiles/projectile_manager/projectile_manager.hpp>
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
    InputHandler input_handler;
    ProjectileManager projectile_manager;

    Player player{
        {.x = player_pos_x, .y = player_pos_y},
        {.x = player_width, .y = player_height},
        &projectile_manager
    };

    // TODO:
    // - Add cleanup to projectile manager. If the projectiles leave the screen, delete them
    // - Add a projectile counter to see how many projectiles are alive
    // - Add fire rate to player

    while (!WindowShouldClose()) {
        command = input_handler.handle_input();
        if (command) {
            command->execute(player);
        }

        projectile_manager.tic();

        BeginDrawing();
        ClearBackground(window.color);
        player.render();
        projectile_manager.render();
        EndDrawing();
    }
}

