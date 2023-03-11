#pragma once
#include "sceneManager.h"
#include <raylib.h>

class loadingScreen : public scene
{
private:
	sceneManager &mySceneManager;

	// Textures
	Texture2D logoTexture;

	// Methods

	// For drawing textures
	void drawTextures();

public:
	loadingScreen(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};