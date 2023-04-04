#pragma once
#include "sceneManager.h"
#include "inputField.h"
#include "reqHandler.h" 
#include <raylib.h>

class registerForm : public scene
{
private:
	sceneManager& mySceneManager;

	// Vectors
	Vector2 mousePos = { 0.f, 0.f };
	Color darkGray = {64, 64, 64, 255};
	Rectangle registerButtonPos = { 99, 559, 270 , 67 };
	Rectangle returnButton = { 105 ,660 , 215, 25};
	

	// Input Fields
	cp::inputField 	fNameField = { {111,324,308,32} ,"text", 22, darkGray };
	cp::inputField 	lNameField = { {538,324,308,32} ,"text", 22, darkGray };
	cp::inputField 	passwordField = { {538,452,308,32} ,"password", 22, darkGray };
	cp::inputField 	emailField = { {110, 456, 330, 27}, "email", 18, darkGray };

	// Textures
	Texture2D headerText;
	Texture2D logoTexture;
	Texture2D backgroundTexture;
	Texture2D registerButton;
	Texture2D labelsTexture;

	// Methods

	// For drawing textures
	void drawTextures();
	// For handling collision events
	void handleCollision();

public:
	registerForm(std::string sceneName, sceneManager& sceneManager);

	// Methods from class 'scene'
	virtual void Start();
	virtual void Update();
	virtual void onExit();
	virtual void loadAssets();
	virtual void deleteAssets();
};