#include <iostream>
#include <iomanip>
#include <vector>
#include "raylib.h"
#include "main_menu.h"
#include "description.h"



void Option1Window() {

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);

        DrawText("Option 1 Window", GetScreenWidth() / 2 - MeasureText("Option 1 Window", 60) / 2, 20, 60, BLACK);

        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }

        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);

        
        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}

void Option2Window() {
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);

        DrawText("Option 2 Window", GetScreenWidth() / 2 - MeasureText("Option 2 Window", 60) / 2, 20, 60, BLACK);


        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }

        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);


        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);


        if (isMouseOverBackButton && isMouseClicked) {
            return; 
        }

        EndDrawing();
    }

    CloseWindow();
}

void Option3Window() {
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);


        DrawText("Option 3 Window", GetScreenWidth() / 2 - MeasureText("Option 3 Window", 60) / 2, 20, 60, BLACK);


        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }

        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);


        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);


        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}

void Option4Window() {
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);

        DrawText("Option 4 Window", GetScreenWidth() / 2 - MeasureText("Option 4 Window", 60) / 2, 20, 60, BLACK);

 
        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }

        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);


        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);


        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}

void Option5Window() {
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);


        DrawText("Option 5 Window", GetScreenWidth() / 2 - MeasureText("Option 5 Window", 60) / 2, 20, 60, BLACK);

 
        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }

        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);

        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}

void Option6Window() {
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);

        // Draw centered header text
        DrawText("Option 6 Window", GetScreenWidth() / 2 - MeasureText("Option 6 Window", 60) / 2, 20, 60, BLACK);

        
        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }
        
        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);

        
        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        
        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}

void Option7Window() {
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);

        
        DrawText("Option 7 Window", GetScreenWidth() / 2 - MeasureText("Option 7 Window", 60) / 2, 20, 60, BLACK);

        
        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }
        
        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);

        
        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        
        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}
void Option8Window() {
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BEIGE);


        DrawText("Option 8 Window", GetScreenWidth() / 2 - MeasureText("Option 8 Window", 60) / 2, 20, 60, BLACK);


        const int squareSize = 250;
        const int spacing = 20;
        const int startX = GetScreenWidth() / 2 - ((3 * squareSize) + (2 * spacing)) / 2;
        const int startY = 80;

        for (int i = 0; i < 3; i++) {
            Rectangle squareRect = {
                startX + i * (squareSize + spacing),
                startY + 120,
                squareSize,
                squareSize
            };

            DrawRectangleRounded(squareRect, 0.2f, 8, GRAY);
        }

        Rectangle backButtonRect = { 10, 10, 80, 40 };
        DrawRectangleRounded(backButtonRect, 0.3f, 8, DARKGRAY);
        DrawText("Back", backButtonRect.x + 10, backButtonRect.y + 10, 20, WHITE);

        Vector2 mousePoint = GetMousePosition();
        bool isMouseOverBackButton = CheckCollisionPointRec(mousePoint, backButtonRect);
        bool isMouseClicked = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

        if (isMouseOverBackButton && isMouseClicked) {
            return;  
        }

        EndDrawing();
    }

    CloseWindow();
}


void DrawDropdownMenu(const char* title, const std::vector<std::string>& options, int& selectedOption, bool& menuActive) {
    const int menuItemHeight = 40;
    const int menuWidth = 200;
    const int menuX = GetScreenWidth() / 2 - menuWidth / 2;
    const int menuY = 150;
    const Color menuColor = LIGHTGRAY;
    const Color selectedColor = SKYBLUE;
    const Color hoverColor = ORANGE;
    const Color textColor = BLACK;
    const int fontSize = 20;

    Rectangle menuRect = { static_cast<float>(menuX), static_cast<float>(menuY), static_cast<float>(menuWidth), static_cast<float>(options.size() * menuItemHeight) };

    // Draw menu background
    DrawRectangleRec(menuRect, menuColor);
    DrawRectangleLinesEx(menuRect, 2, GRAY);

    // Draw menu title
    DrawText(title, menuX + 10, menuY - 30, fontSize, textColor);

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

            // Open a different window based on the selected option
            switch (selectedOption) {
            case 0: Option1Window(); break;
            case 1: Option2Window(); break;
            case 2: Option3Window(); break;
            case 3: Option4Window(); break;
            case 4: Option5Window(); break;
            case 5: Option6Window(); break;
            case 6: Option7Window(); break;
            case 7: Option8Window(); break;
            
            }
        }

        // Determine the color based on mouse interaction
        Color itemColor = menuColor;
        if (isMouseOverItem) {
            itemColor = hoverColor;
        }
        if (selectedOption == static_cast<int>(i)) {
            itemColor = selectedColor;
        }

        DrawRectangleRec(menuItemRect, itemColor);
        DrawText(options[i].c_str(), menuX + 10, menuY + 10 + i * menuItemHeight, fontSize, textColor);
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