#include <iostream>
#include <iomanip>
#include <vector>
#include "raylib.h"
#include "main_menu.h"
#include "description.h"



void DrawDropdownMenu(const char* title, const std::vector<std::string>& options, int& selectedOption, bool& menuActive) {
    const int menuItemHeight = 40;
    const int menuWidth = 200;
    const int menuX = GetScreenWidth() / 2 - menuWidth / 2;
    const int menuY = 150;
    const Color menuColor = LIGHTGRAY;
    const Color selectedColor = SKYBLUE;

    Rectangle menuRect = { static_cast<float>(menuX), static_cast<float>(menuY), static_cast<float>(menuWidth), static_cast<float>(options.size() * menuItemHeight) };

    // Draw menu background
    DrawRectangleRec(menuRect, menuColor);
    DrawRectangleLinesEx(menuRect, 2, GRAY);

    // Draw menu title
    DrawText(title, menuX + 10, menuY - 30, 20, BLACK);

    // Check mouse position and button state for menu activation
    Vector2 mousePoint = GetMousePosition();
    bool isMouseOverMenu = CheckCollisionPointRec(mousePoint, menuRect);
    bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

    // Toggle menu activation on mouse click outside the menu
    if (isMouseOverMenu && isMouseClicked) {
        menuActive = !menuActive;
    }

    // Draw menu options
    for (size_t i = 0; i < options.size(); i++) {
        Rectangle menuItemRect = { static_cast<float>(menuX), static_cast<float>(menuY + i * menuItemHeight), static_cast<float>(menuWidth), static_cast<float>(menuItemHeight) };


        bool isMouseOverItem = CheckCollisionPointRec(mousePoint, menuItemRect);
        if (isMouseOverItem && isMouseClicked) {
            selectedOption = static_cast<int>(i);
            menuActive = false;
        }


        DrawRectangleRec(menuItemRect, (isMouseOverItem || selectedOption == static_cast<int>(i)) ? selectedColor : menuColor);
        DrawText(options[i].c_str(), menuX + 10, menuY + 10 + i * menuItemHeight, 20, BLACK);
    }
}

void StartWindow() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    int selectedOption = 0;
    bool menuActive = false;

    std::vector<std::string> dropdownOptions = { "Option 1", "Option 2", "Option 3", "Option 4", "Option 5", "Option 6", "Option 7", "Option 8" };

    while (!WindowShouldClose()) {

        if (IsKeyPressed(KEY_ESCAPE)) {
            break;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);


        DrawDropdownMenu("Select an option:", dropdownOptions, selectedOption, menuActive);



        EndDrawing();
    }
}