#pragma once
#include "sceneManager.h"
#include <raylib.h>
#include <string>

class simulatorPage : public scene
{
private:
	sceneManager& mySceneManager;

	// Variables
	Camera3D camera = { 0 };
	Vector2 mousePos = { 0.f, 0.f };
	int dragging = -1;

	// Models
	Model moleculesModel[6];

	// Textures
	Texture backgroundTexture;
	Texture h1;

	// Positions
	Rectangle backButton = {23, 724, 68, 42};
	Rectangle elementsPos[6];
	Rectangle moleculesPos[6];

	// Methods
	// For drawing textures
	void drawTextures();
	// For handling collision events
	void handleCollision();
	// For handling drag and drop 
	void handleDragDrop();


public:
	simulatorPage(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};