#pragma once
#include "sceneManager.h"
#include <raylib.h>

class mainScene : public scene
{
private:
	sceneManager &mySceneManager;

	// Variables
	Vector2 mousePos = {0.f, 0.f};
	int tabsAnimation = 0;

	// Textures
	Texture backgroundTexture;
	Texture headerText;
	Texture tableTexture;
	Texture userInfo;
	Texture logOutButton;
	// Tabs
	Texture selectedTab;
	Texture tableTab;
	Texture calculatorTab;
	Texture simulationTab;
	Texture archiveTab;
	Texture settingsTab;

	// Positions of the Textures
	Rectangle elementsPos[10]; // Position of the implemented elements
	Rectangle tabsPos[5];
	Rectangle selectedTabPos;
	Rectangle logOutPos;

	// Methods
	// For drawing textures
	void drawTextures();
	// For handling collision events
	void handleCollision();

public:
	mainScene(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};