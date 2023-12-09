#include <iostream>
#include <iomanip>
#include <vector>
#include "raylib.h"
#include "program.h"

void program() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    int selectedOption = 0; 

    InitWindow(screenWidth, screenHeight, "Main Menu Example");
    SetWindowState(FLAG_FULLSCREEN_MODE);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        
        if (IsKeyPressed(KEY_DOWN)) {
            selectedOption = (selectedOption + 1) % 3;
        }
        else if (IsKeyPressed(KEY_UP)) {
            selectedOption = (selectedOption - 1 + 3) % 3; 
        }

        
        BeginDrawing();
        ClearBackground(BEIGE);

        
        DrawText("Get To Your Location Save", screenWidth / 2 - MeasureText("Get To Your Location Save", 40) / 2, 100, 40, BLACK);

        DrawText(selectedOption == 0 ? "> Start" : "Start", screenWidth / 2 - MeasureText("Start", 40) / 2, 260, 40, DARKGRAY);
        DrawText(selectedOption == 1 ? "> Description" : "Description", screenWidth / 2 - MeasureText("Options", 40) / 2, 320, 40, DARKGRAY);
        DrawText(selectedOption == 2 ? "> Exit" : "Exit", screenWidth / 2 - MeasureText("Exit", 40) / 1, 380, 40, DARKGRAY);



        EndDrawing();
    }

    CloseWindow();
}



   