#pragma once
#include "sceneManager.h"
#include <raylib.h>

class loadingScreen : public scene
{
private:
	sceneManager &mySceneManager;

	// Variables
	bool animationIsOver = false;
	float animationCounter = 0;

	// Vector variables
	Color loadingOpacity = {255, 255, 255, 255};

	// Textures
	Texture2D defaultTexture;
	Texture2D logoTexture;
	Texture2D transitionTexture;

	// Methods:
	void handleIntro(); // For intro animation
	void increaseOpacity(); // Fades in the texture
	void decreaseOpacity(); // Fades out the texture
	void drawTextures();  // For drawing textures

public:
	loadingScreen(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};