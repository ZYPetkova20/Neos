#pragma once
#include "sceneManager.h"
#include "atomsScene.h"
#include <raylib.h>
#include <string>
#include <iostream>

class mainScene : public scene
{
private:
	sceneManager &mySceneManager;

	// Variables
	atomsScene atomsPreview;
	Font font;
	Vector2 mousePos = {0.f, 0.f};
	Vector2 sectionPos[10]; // Positions of the table sections
	int tabsAnimation = 0;
	int sIndex = 0; // index of the current hovered section
	// User data
	string fName;
	string lName;
	string userName;
	string profilePic = "";

	// Textures
	Texture backgroundTexture;
	Texture headerText;
	Texture tableTexture;
	Texture sectionsTexture[10];
	Texture tableHover;
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
	Rectangle elementsPos[30]; // Positions of the implemented elements
	Rectangle tabsPos[5];
	Rectangle tableHoverPos;
	Rectangle selectedTabPos;
	Rectangle logOutPos;

	// Methods
	// For drawing textures
	void drawTextures();
	// For handling collision events
	void handleCollision();
	// For setting the positions of the atoms
	void setAtomsPos();
	// For setting the positions of the table sections
	void setSectionsPos();
	// For setting the positions of the tabs
	void setTabsPos();
	// For setting the user info in the tabs
	void displayUserInfo();

public:
	mainScene(std::string sceneName, sceneManager& sceneManager);

	// Public methods
	int getAtomId(); // returns the id of the selected atom

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};