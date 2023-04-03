#include "../main.h"
#include "../include/sceneManager.h"
#include "../include/loadingScreen.h"
#include "../include/greetingScreen.h"
#include "../include/registerForm.h"
#include "../include/signInForm.h"
#include "../include/mainScene.h"
#include "raylib.h"
#include "../include/reqHandler.h"    

// Screen size
const int screenWidth = 1406;
const int screenHeight = 790;

void start()
{
    ReqHandler logReg;
    logReg.login();

    // Setting window
    InitWindow(screenWidth, screenHeight, "Neos - Chemistry project");
    SetTargetFPS(60);
    SetWindowIcon(LoadImage("../assets/icon.png"));

    sceneManager sceneManager;

    // Creating scenes
    loadingScreen sceneLoadingScreen{ "LoadingScreen", sceneManager };
    greetingScreen sceneGreetingScreen{ "GreetingScreen", sceneManager };
    registerForm sceneRegisterForm{ "RegisterForm", sceneManager };
    signInForm sceneSignInForm{ "SignInForm", sceneManager };
    mainScene sceneMainScene{ "MainScene", sceneManager };

    // Adding scenes to the scene vector
    sceneManager.addScene(&sceneLoadingScreen);
    sceneManager.addScene(&sceneGreetingScreen);
    sceneManager.addScene(&sceneRegisterForm);
    sceneManager.addScene(&sceneSignInForm);
    sceneManager.addScene(&sceneMainScene);

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