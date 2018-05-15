#include "raylib.h"


const int windowWidth = 600;
const int windowHeigth = 600;

int main(int argc, char const *argv[])
{
    InitWindow(windowWidth, windowHeigth, "Raylib shaders fun");

    SetTargetFPS(60);

    bool running = true;

    while (running) {
        if (WindowShouldClose()) {
            running = false;
        }

        BeginDrawing();

        DrawRectangle(100, 100, 400, 400, ORANGE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}