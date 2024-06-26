#include "../include/registerForm.h"
#include <iostream>

registerForm::registerForm(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void registerForm::Start()
{
	loadAssets();
}

// Method updating the scene every frame
void registerForm::Update()
{
	mousePos = GetMousePosition();
	handleCollision();

	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	fNameField.updateField(mousePos);
	lNameField.updateField(mousePos);
	passwordField.updateField(mousePos);
	emailField.updateField(mousePos);

	EndDrawing();
}

// Method called when we exit the scene or the program
void registerForm::onExit()
{
	fNameField.resetField();
	lNameField.resetField();
	emailField.resetField();
	passwordField.resetField();

	deleteAssets();
}

// Method for drawning the raylib textures
void registerForm::drawTextures()
{
	DrawTexture(backgroundTexture, 1202, 0, WHITE);
	DrawTexture(logoTexture, 1293, 745, WHITE);
	DrawTexture(labelsTexture, 99, 282, WHITE);
	DrawTexture(headerText, 99, 37, WHITE);
	DrawTexture(registerButton, registerButtonPos.x, registerButtonPos.y, WHITE);
	if (showWarning)
		DrawTexture(warningTexture, 99, 510, WHITE);
}

// Method for handling collision events
void registerForm::handleCollision()
{
	if (CheckCollisionPointRec(mousePos, registerButtonPos) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		ReqHandler logReg;
		if (logReg.isLogRegValid(fNameField.getResult(), lNameField.getResult(), emailField.getResult(), passwordField.getResult(), "register"))
		{
			showWarning = false;
			int userId = logReg.signUp(fNameField.getResult(), lNameField.getResult(), emailField.getResult(), passwordField.getResult());
			mySceneManager.setCurrentScene("MainScene", userId);
		}
		else
		{
			fNameField.resetField();
			lNameField.resetField();
			emailField.resetField();
			passwordField.resetField();
			string resetKey = "resetSignInKey";
			logReg.isLogRegValid(resetKey, resetKey, resetKey, resetKey, "login");
			showWarning = true;
		}
	}

	if (CheckCollisionPointRec(mousePos, returnButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		showWarning = false;
		mySceneManager.setCurrentScene("SignInForm");
	}
}

// Method for loading the variables / assets
void registerForm::loadAssets()
{
	headerText = LoadTexture("../assets/registerForm/h1.png");
	logoTexture = LoadTexture("../assets/smallIcon.png");
	backgroundTexture = LoadTexture("../assets/registerForm/backGroundImg.png");
	registerButton = LoadTexture("../assets/registerButton.png");
	labelsTexture = LoadTexture("../assets/registerForm/labels.png");
	warningTexture = LoadTexture("../assets/registerForm/warning.png");
}

// Method for unloading the variables / assets
void registerForm::deleteAssets()
{
	UnloadTexture(headerText);
	UnloadTexture(logoTexture);
	UnloadTexture(backgroundTexture);
	UnloadTexture(registerButton);
	UnloadTexture(labelsTexture);
	UnloadTexture(warningTexture);
}