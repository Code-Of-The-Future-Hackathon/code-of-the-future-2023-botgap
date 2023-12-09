#include <iostream>
#include <iomanip>
#include <vector>
#include "raylib.h"
#include "program.h"

void StartWindow() {
    
}

void DescriptionWindow() {
    const int windowWidth = 700;
    const int windowHeight = 300;

    int windowX = (GetScreenWidth() - windowWidth) / 2;
    int windowY = (GetScreenHeight() - windowHeight) / 2;

    float cornerRadius = 0.5; // Adjust the corner radius as needed

    bool backButtonClicked = false;

    while (!WindowShouldClose() && !backButtonClicked) {
        if (IsKeyPressed(KEY_ESCAPE)) {
            // If the user presses Escape, exit the Description window
            break;
        }

        // Check mouse position and button state for the back button
        Vector2 mousePoint = GetMousePosition();
        Rectangle backButton = { windowX + windowWidth - 80, windowY + windowHeight + 120, 100, 40 };
        bool isMouseOverButton = CheckCollisionPointRec(mousePoint, backButton);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        if (isMouseOverButton && isMouseClicked) {
            backButtonClicked = true;
        }

        BeginDrawing();
        ClearBackground(BEIGE);

        // Create a Rectangle structure
        Rectangle descriptionRect = { windowX, windowY, windowWidth, windowHeight};

        // Draw blue rectangle with rounded corners
        DrawRectangleRounded(descriptionRect, cornerRadius, 0, DARKGRAY);

        // Draw centered text
        const char* descriptionText = "The main purpose of this program is to inform you about\n different places and the natural anomalies that have happened\n there and the chances of new ones. You can choose a specific\n region where you want to go or maybe you are curious about.\n If you do that you will see all the statistics about the place.";

        

        // Draw text with the corrected positioning
        DrawText(descriptionText, windowX + 25, windowY + 90, 20, WHITE);

        // Draw back to main menu button
        DrawRectangleRec(backButton, isMouseOverButton ? SKYBLUE : LIGHTGRAY);
        DrawText("Back", backButton.x + 23, backButton.y + 13, 20, DARKBLUE);

        EndDrawing();
    }
}


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

        if (IsKeyPressed(KEY_ENTER)) {
            // Handle actions based on selected option
            switch (selectedOption) {
            case 0:
                // "Start" option selected, open Start window
                StartWindow();
                break;
            case 1:
                // "Description" option selected, open Description window
                DescriptionWindow();
                break;
            case 2:
                // "Exit" option selected, stop the program
                CloseWindow();
                break;
            }
        }

        BeginDrawing();
        ClearBackground(BEIGE);

        DrawText("Get To Your Location Save", screenWidth / 2 - MeasureText("Get To Your Location Save", 50) / 2, 100, 50, BLACK);

        DrawText(selectedOption == 0 ? "> Start" : "Start", screenWidth / 2 - MeasureText("Start", 40) / 2, 260, 40, DARKGRAY);
        DrawText(selectedOption == 1 ? "> Description" : "Description", screenWidth / 2 - MeasureText("Options", 40) / 2, 320, 40, DARKGRAY);
        DrawText(selectedOption == 2 ? "> Exit" : "Exit", screenWidth / 2 - MeasureText("Exit", 40) / 1, 380, 40, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
}



   