#include <iostream>
#include <iomanip>
#include <vector>
#include "raylib.h"
#include "program.h"
#include "main_menu.h"


void DescriptionWindow() {
    const int windowWidth = 700;
    const int windowHeight = 300;

    int windowX = (GetScreenWidth() - windowWidth) / 2;
    int windowY = (GetScreenHeight() - windowHeight) / 2;

    float cornerRadius = 0.5;

    bool backButtonClicked = false;

    while (!WindowShouldClose() && !backButtonClicked) {
        if (IsKeyPressed(KEY_ESCAPE)) {

            break;
        }


        Vector2 mousePoint = GetMousePosition();
        Rectangle backButton = { windowX + windowWidth - 80, windowY + windowHeight + 120, 100, 40 };
        bool isMouseOverButton = CheckCollisionPointRec(mousePoint, backButton);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        if (isMouseOverButton && isMouseClicked) {
            backButtonClicked = true;
        }

        BeginDrawing();
        ClearBackground(BEIGE);


        Rectangle descriptionRect = { windowX, windowY, windowWidth, windowHeight };


        DrawRectangleRounded(descriptionRect, cornerRadius, 0, DARKGRAY);


        const char* descriptionText = "The main purpose of this program is to inform you about\n different places and the natural anomalies that have happened\n there and the chances of new ones. You can choose a specific\n region where you want to go or maybe you are curious about.\n If you do that you will see all the statistics about the place.";




        DrawText(descriptionText, windowX + 25, windowY + 90, 20, WHITE);


        DrawRectangleRec(backButton, isMouseOverButton ? SKYBLUE : LIGHTGRAY);
        DrawText("Back", backButton.x + 23, backButton.y + 13, 20, DARKBLUE);

        EndDrawing();
    }
}
