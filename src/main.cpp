#include <string>
#include "raylib.h"

int main()
{
    const int windowWidth = 600;
    const int windowHeight = 800;

    InitWindow(windowWidth, windowHeight, "RAYLIB TEST - DO NOT PANIC");
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            DrawText("Congrats!\nYou created your first window!", 10, 20, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}