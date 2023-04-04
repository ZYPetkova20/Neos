#include "../include/main.h"

const int screenWidth = 1406;
const int screenHeight = 790;

void setup()
{
    //ReqHandler logReg;  Testing the logging
    //logReg.login();
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
    calculatorPage sceneCalculatorPage{ "CalculatorPage", sceneManager };

    // Adding scenes to the scene vector
    sceneManager.addScene(&sceneLoadingScreen);
    sceneManager.addScene(&sceneGreetingScreen);
    sceneManager.addScene(&sceneRegisterForm);
    sceneManager.addScene(&sceneSignInForm);
    sceneManager.addScene(&sceneMainScene);
    sceneManager.addScene(&sceneCalculatorPage);

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