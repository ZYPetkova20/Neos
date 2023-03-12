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
	Color transitionOpacity = { 255, 255, 255, 255 };
	Vector2 mousePos = { 0.f, 0.f };

	// Textures
	Texture2D greetingText;
	Texture2D logoTexture;
	Texture2D backgroundTexture;
	Texture2D signInButton;
	Texture2D registerButton;
	Texture2D transitionTexture;

	// Texture Positions
	Vector2 signInButtonPos = {108, 331};
	Vector2 registerButtonPos = {108, 440};

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