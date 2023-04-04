#pragma once
#include "sceneManager.h"
#include <raylib.h>
#include <cmath>
#define RAYMATH_IMPLEMENTATION
#include "raymath.h"
#define _USE_MATH_DEFINES

class atomsScene
{
private:

    // Variables
    Camera3D camera = { 0 };
    RenderTexture atomField; // field for 3d where to display the model
    Vector2 mousePos = { 0.f, 0.f }; // Vector for the mouse position
    int currentAtom = 0; // holds the id of the selected atom
    bool cameraFlag = true;

    float screenWidth = 1406;
    float screenHeight = 790;

    // Models
    Model atomModel;

    // Textures
    Texture atomInfo;

    // Texture Positions

    // Methods
    // handles Atom animations
    void displayAtom(Camera& camera, bool& cameraFlag);
    // camera movement
    void CameraYaw1(Camera* camera, float angle, bool rotateAroundTarget);
    // raylib camera function
    Vector3 GetCameraUp(Camera* camera);

public:
    atomsScene(); // Constructor

    // Methods from class 'scene'
    void Start(int atomId); // Method to initialize the scene
    void Update(); // Method to update the scene
    void onExit(); // Method to exit the scene
    void loadAssets(); // Method to load assets for the scene
    void deleteAssets(); // Method to delete assets for the scene
};