#include<bits/stdc++.h>
#include "raylib.h"
using namespace std;

int main()
{
    // Window Initializing
    InitWindow(1600, 900, "SafeSweep");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Title
        DrawText("SafeSweep", 540, 180, 100, BLACK);
        DrawText("Welcome to the Game!", 630, 280, 30, DARKGRAY);

        // Username input box
        DrawText("Username:", 550, 400, 20, DARKGRAY);
        DrawRectangle(550, 430, 500, 50, LIGHTGRAY);
        DrawRectangleLines(550, 430, 500, 50, DARKGRAY);

        // Password input box
        DrawText("Password:", 550, 500, 20, DARKGRAY);
        DrawRectangle(550, 530, 500, 50, LIGHTGRAY);
        DrawRectangleLines(550, 530, 500, 50, DARKGRAY);

        // Login button
        DrawRectangle(550, 630, 230, 60, DARKBLUE);
        DrawText("LOGIN", 625, 647, 25, WHITE);

        DrawRectangle(820, 630, 230, 60, DARKBLUE);
        DrawText("Sign Up", 885, 647, 25, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}