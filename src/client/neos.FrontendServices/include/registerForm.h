#pragma once
#include "sceneManager.h"
#include "inputField.h"
#include <raylib.h>

class registerForm : public scene
{
private:
	sceneManager& mySceneManager;

	// Vector2
	Vector2 mousePos = { 0.f, 0.f };
	Color darkGray = {64, 64, 64, 255};

	// Input Fields
	cp::inputField 	fNameField = { {111,324,308,32} ,"text", 22, darkGray };
	cp::inputField 	lNameField = { {485,324,308,32} ,"text", 22, darkGray };
	cp::inputField 	passwordField = { {110,456,330,27} ,"email" , 18, darkGray };
	cp::inputField 	emailField = { {485,452,308,32} ,"password", 22, darkGray };

	// Textures
	Texture2D headerText;
	Texture2D logoTexture;
	Texture2D backgroundTexture;
	Texture2D registerButton;
	Texture2D labelsTexture;

	// Texture Positions
	Vector2 registerButtonPos = { 99, 559 };

	// Methods

	// For drawing textures
	void drawTextures();

public:
	registerForm(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};