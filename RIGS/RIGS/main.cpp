
#include "flecs/flecs.h"

#define GLSL_VERSION            430
#define GRAPHICS_API_OPENGL_43
#define RLGL_RENDER_TEXTURES_HINT
#include "raylib/raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    flecs::world world;
    auto e = world.entity();

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");


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