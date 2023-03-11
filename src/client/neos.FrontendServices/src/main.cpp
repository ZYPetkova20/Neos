#include "raylib.h"
#include "../include/sceneManager.h"
#include "../include/mainMenu.h"

// Screen size
const int screenWidth = 1406;
const int screenHeight = 790;

int main()
{
    // Setting window
    InitWindow(screenWidth, screenHeight, "Neos - Chemistry project");

    SetTargetFPS(60);

    // SetWindowIcon(LoadImage(*img*));

    sceneManager sceneManager;

    // Creating scenes
    mainMenu sceneMainMenu{ "MainMenu", sceneManager };

    // Adding scenes to the scene vector
    sceneManager.addScene(&sceneMainMenu);

    // Setting the first current scene
    sceneManager.setCurrentScene("MainMenu");

    // Main event loop
    while (!WindowShouldClose())
    {
        sceneManager.updateScene();
    }

    // De-Initialization
    CloseWindow();
}