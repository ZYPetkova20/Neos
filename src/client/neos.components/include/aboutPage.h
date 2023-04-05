#pragma once
#include "sceneManager.h"
#include <raylib.h>
#include <string>

class aboutPage : public scene
{
private:
	sceneManager& mySceneManager;

	// Variables
	Font font;
	Vector2 mousePos = { 0.f, 0.f };
	Vector2 sectionPos[10]; // Positions of the table sections
	Vector2 infoPos;
	Vector2 scrollBasePos = {1360, 14};
	int tabsAnimation = 0;
	int sIndex = 0; // index of the current hovered section
	// User data
	string fName;
	string lName;
	string userName;
	string profilePic = "";

	// Textures
	Texture backgroundTexture;
	Texture userInfo;
	Texture logOutButton;
	// Tabs
	Texture selectedTab;
	Texture tableTab;
	Texture calculatorTab;
	Texture simulationTab;
	Texture archiveTab;
	Texture settingsTab;
	Texture aboutInfo;
	Texture scrollbarBase;
	Texture scrollbarInner;

	// Positions of the Textures
	Rectangle tabsPos[5];
	Rectangle selectedTabPos;
	Rectangle logOutPos;
	Rectangle scrollInner;

	// Methods
	// For drawing textures
	void drawTextures();
	// For handling collision events
	void handleCollision();
	// For setting the positions of the tabs
	void setTabsPos();
	// For setting the user info in the tabs
	void displayUserInfo();
	// For handling scrolling
	void handleScroll();

public:
	aboutPage(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};