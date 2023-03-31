#pragma once
#include "sceneManager.h"
#include <raylib.h>

class greetingScreen : public scene
{
private:
    sceneManager& mySceneManager;

    // Variables
    bool animationIsOver = false; // Flag to indicate whether the animation is over or not
    float animationCounter = 0; // Counter for the animation

    // Vector variables
    Color transitionOpacity = { 255, 255, 255, 255 }; // Vector for the opacity of the transition
    Vector2 mousePos = { 0.f, 0.f }; // Vector for the mouse position

    // Textures
    Texture2D greetingText; // Texture for the greeting text
    Texture2D logoTexture; // Texture for the logo
    Texture2D backgroundTexture; // Texture for the background
    Texture2D signInButton; // Texture for the sign-in button
    Texture2D registerButton; // Texture for the register button
    Texture2D transitionTexture; // Texture for the transition effect

    // Texture Positions
    Vector2 signInButtonPos = { 108, 331 }; // Position of the sign-in button
    Vector2 registerButtonPos = { 108, 440 }; // Position of the register button

    // Methods
    void handleCollisions(); // Method to handle collisions between objects
    void fadeAnimation(); // Method to fade out the texture

    // Method for drawing textures
    void drawTextures();

public:
    greetingScreen(std::string sceneName, sceneManager& sceneManager); // Constructor

    // Methods from class 'scene'
    virtual void Start(); // Method to initialize the scene
    virtual void Update(); // Method to update the scene
    virtual void onExit(); // Method to exit the scene
    virtual void loadAssets(); // Method to load assets for the scene
    virtual void deleteAssets(); // Method to delete assets for the scene
};