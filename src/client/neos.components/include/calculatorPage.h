#pragma once
#include "sceneManager.h"
#include <raylib.h>
#include <string>
#include "inputField.h"
#include "calculator.h"

class calculatorPage : public scene
{
private:
	sceneManager& mySceneManager;

	// Variables
	calculator calculator;
	Font font;
	Font calculatorFont;
	Vector2 mousePos = { 0.f, 0.f };
	Vector2 sectionPos[10]; // Positions of the table sections
	int tabsAnimation = 0;
	int sIndex = 0; // index of the current hovered section
	int scrollSpeed = 16;
	// User data
	string fName;
	string lName;
	string userName;
	string profilePic = "";
	// Input fields
	float answer1 = -1;
	cp::inputField 	numField1 = { {378,306,36,32} ,"num", 22, BLACK};
	cp::inputField 	numField2 = { {574,306,36,32} ,"num", 22, BLACK};

	// Textures
	Texture backgroundTexture;
	Texture userInfo;
	Texture logOutButton;
	Texture h1;
	Texture calculatorsTexture;
	Texture scrollbarBase;
	Texture scrollbarInner;
	// Tabs
	Texture selectedTab;
	Texture tableTab;
	Texture calculatorTab;
	Texture simulationTab;
	Texture archiveTab;
	Texture settingsTab;

	// Positions of the Textures
	Rectangle tabsPos[5];
	Rectangle selectedTabPos;
	Rectangle logOutPos;
	Rectangle calculatorsPos;
	Rectangle scrollBasePos;
	Rectangle scrollInnerPos;

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
	calculatorPage(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};