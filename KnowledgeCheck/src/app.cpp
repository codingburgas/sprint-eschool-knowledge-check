#include "../lib/app.h"

App::App() {
    InitWindow(1920, 1080, "BlackJack");
    SetTargetFPS(60);
    mainMenu.loadResources();
    /*testsMenu.loadResources();*/
    update();
    CloseWindow();
}
void App::update() {
    while (!WindowShouldClose()) {
        appLogic();
        display();
    }
}

void App::appLogic() {
    if (pages.mainMenu) {
        if (CheckCollisionPointRec(GetMousePosition(), mainMenu.testsButtonRec) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            pages.mainMenu = 0;
            pages.tests = 1;
        }
        return;
    }
    /*if (pages.tests) {
        testsMenu.gameLogic();
    }*/
}

void App::display() {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    if (pages.mainMenu) {
        drawMainMenu();
    }
    /*if (pages.tests) {
        drawTests();
    }*/
    EndDrawing();
}

void App::drawMainMenu() {
    DrawTexture(mainMenu.background, 0, 0, WHITE);
    DrawTexture(mainMenu.learnButton, 660, 600, WHITE);
    DrawTexture(mainMenu.testsButton, 460, 400, WHITE);
    DrawTexture(mainMenu.title, 360, 0, WHITE);
}
