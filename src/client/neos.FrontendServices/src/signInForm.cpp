#include "../include/signInForm.h"

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

	if (CheckCollisionPointRec(mousePos, returnButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		mySceneManager.setCurrentScene("RegisterForm");
	}

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
}

// Method for loading the variables / assets
void signInForm::loadAssets()
{
	headerText = LoadTexture("../assets/signInForm/h1.png");
	logoTexture = LoadTexture("../assets/smallIcon.png");
	backgroundTexture = LoadTexture("../assets/registerForm/backGroundImg.png");
	signInButton = LoadTexture("../assets/signInForm/signInButton.png");
	labelsTexture = LoadTexture("../assets/signInForm/labels.png");
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