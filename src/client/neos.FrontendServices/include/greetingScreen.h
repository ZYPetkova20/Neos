#pragma once
#include "sceneManager.h"
#include <raylib.h>

class greetingScreen : public scene
{
private:
	sceneManager& mySceneManager;

	// Variables
	bool animationIsOver = false;
	float animationCounter = 0;

	// Vector variables
	Vector2 mousePos = { 0.f, 0.f };
	Color transitionOpacity = { 255, 255, 255, 255 };

	// Textures
	Texture2D greetingText;
	Texture2D logoTexture;
	Texture2D transitionTexture;

	// Methods
	void fadeAnimation(); // Fades out the texture

	// For drawing textures
	void drawTextures();

public:
	greetingScreen(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};