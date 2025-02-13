#include "raylib.h"

int main()
{
    const int windowWidth = 800;
    const int windowHeight = 600;

    InitWindow(windowWidth, windowHeight, "RAYLIB TEST - DO NOT PANIC");
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}