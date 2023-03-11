#pragma once
#include "sceneManager.h"
#include <raylib.h>

class mainMenu : public scene
{
private:
	sceneManager &mySceneManager;

	// Vector2
	Vector2 mousePos;

	// Methods

	// For drawing textures
	void drawTextures();

public:
	mainMenu(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};