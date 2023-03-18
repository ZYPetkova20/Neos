#pragma once
#include "sceneManager.h"
#include <raylib.h>

class signInForm : public scene
{
private:
	sceneManager& mySceneManager;

	// Vector2
	Vector2 mousePos = { 0.f, 0.f };

	// Methods

	// For drawing textures
	void drawTextures();

public:
	signInForm(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};