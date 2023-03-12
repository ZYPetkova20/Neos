#include "../include/sceneManager.h"
#include "../include/loadingScreen.h"
#include "../include/greetingScreen.h"
#include "../include/mainMenu.h"
#include "raylib.h"

// Screen size
const int screenWidth = 1406;
const int screenHeight = 790;

int main()
{
    // Setting window
    InitWindow(screenWidth, screenHeight, "Neos - Chemistry project");
    SetTargetFPS(60);
    SetWindowIcon(LoadImage("../assets/icon.png"));

    sceneManager sceneManager;

    // Creating scenes
    loadingScreen sceneLoadingScreen{ "LoadingScreen", sceneManager };
    greetingScreen sceneGreetingScreen{ "GreetingScreen", sceneManager };
    mainMenu sceneMainMenu{ "MainMenu", sceneManager };

    // Adding scenes to the scene vector
    sceneManager.addScene(&sceneLoadingScreen);
    sceneManager.addScene(&sceneGreetingScreen);
    sceneManager.addScene(&sceneMainMenu);

    // Setting the first current scene
    sceneManager.setCurrentScene("LoadingScreen");

    // Main event loop
    while (!WindowShouldClose())
    {
        sceneManager.updateScene();
    }

    // De-Initialization
    CloseWindow();
}