#pragma once
#include "sceneManager.h"
#include "inputField.h"
#include <raylib.h>

class signInForm : public scene
{
private:
	sceneManager& mySceneManager;

	// Vector2
	Vector2 mousePos = { 0.f, 0.f };
	Color darkGray = { 64, 64, 64, 255 };
	Rectangle signInButtonPos = { 99, 435, 270 , 67 };
	Rectangle returnButton = { 99 , 535 , 215, 25 };

	// Input Fields
	cp::inputField 	emailField = { {110, 325, 330, 30}, "email", 18, darkGray };
	cp::inputField 	passwordField = { {549,325,308,32} ,"password", 22, darkGray };

	// Textures
	Texture2D headerText;
	Texture2D logoTexture;
	Texture2D backgroundTexture;
	Texture2D signInButton;
	Texture2D labelsTexture;

	// Methods

	// For drawing textures
	void drawTextures();
	// For handling collision events
	void handleCollision();

public:
	signInForm(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};