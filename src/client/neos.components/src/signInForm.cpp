#include "../include/signInForm.h"
#include <iostream>

signInForm::signInForm(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void signInForm::Start()
{
	loadAssets();
}

// Method updating the scene every frame
void signInForm::Update()
{
	mousePos = GetMousePosition();
	handleCollision();

	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	emailField.updateField(mousePos);
	passwordField.updateField(mousePos);

	EndDrawing();
}

// Method called when we exit the scene or the program
void signInForm::onExit()
{
	emailField.resetField();
	passwordField.resetField();
	deleteAssets();
}

// Method for drawning the raylib textures
void signInForm::drawTextures()
{
	DrawTexture(backgroundTexture, 1202, 0, WHITE);
	DrawTexture(logoTexture, 1293, 745, WHITE);
	DrawTexture(labelsTexture, 99, 282, WHITE);
	DrawTexture(headerText, 99, 37, WHITE);
	DrawTexture(signInButton, signInButtonPos.x, signInButtonPos.y, WHITE);
	if (showWarning)
		DrawTexture(warningTexture, 99, 388, WHITE);
}

// Method for handling collision events
void signInForm::handleCollision()
{
	ReqHandler logReg;
	if (CheckCollisionPointRec(mousePos, signInButtonPos) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		string email = emailField.getResult();
		string pass = passwordField.getResult();
		if (logReg.isLogRegValid("", "", email, pass, "login"))
		{
			showWarning = false;
			int userId = logReg.login(emailField.getResult(), passwordField.getResult());
			mySceneManager.setCurrentScene("MainScene", userId);
		}
		else
		{
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
		mySceneManager.setCurrentScene("RegisterForm");
	}
}

// Method for loading the variables / assets
void signInForm::loadAssets()
{
	headerText = LoadTexture("../assets/signInForm/h1.png");
	logoTexture = LoadTexture("../assets/smallIcon.png");
	backgroundTexture = LoadTexture("../assets/registerForm/backGroundImg.png");
	signInButton = LoadTexture("../assets/signInForm/signInButton.png");
	labelsTexture = LoadTexture("../assets/signInForm/labels.png");
	warningTexture = LoadTexture("../assets/signInForm/warning.png");
}

// Method for unloading the variables / assets
void signInForm::deleteAssets()
{
	UnloadTexture(headerText);
	UnloadTexture(logoTexture);
	UnloadTexture(backgroundTexture);
	UnloadTexture(signInButton);
	UnloadTexture(labelsTexture);
}