#include "raylib.h"

int main(void)
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib Test Window");
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Drawing
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first Raylib window!", 100, 200, 20, DARKGRAY);
        EndDrawing();
    }

    // Cleanup
    CloseWindow();

    return 0;
}
