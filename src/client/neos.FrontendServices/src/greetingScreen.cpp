#include "../include/greetingScreen.h"
#include <iostream>

greetingScreen::greetingScreen(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void greetingScreen::Start()
{
	loadAssets();
}

// Method updating the scene every frame
void greetingScreen::Update()
{
	mousePos = GetMousePosition();
	handleCollisions();

	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	fadeAnimation();

	EndDrawing();
}

// Method called when we exit the scene or the program
void greetingScreen::onExit()
{
	deleteAssets();
}

// Method for loading the variables / assets
void greetingScreen::loadAssets()
{
	greetingText = LoadTexture("../assets/greetingScreen/greetingText.png");
	logoTexture = LoadTexture("../assets/greetingScreen/smallIcon.png");
	backgroundTexture = LoadTexture("../assets/greetingScreen/backGroundImg.png");
	signInButton = LoadTexture("../assets/greetingScreen/signInButton.png");
	registerButton = LoadTexture("../assets/registerButton.png");
	transitionTexture = LoadTexture("../assets/loadingTransition.png");
}

// Method for unloading the variables / assets
void greetingScreen::deleteAssets()
{
	UnloadTexture(greetingText);
	UnloadTexture(logoTexture);
	UnloadTexture(backgroundTexture);
	UnloadTexture(signInButton);
	UnloadTexture(registerButton);
	UnloadTexture(transitionTexture);
}

// Method for drawning the raylib textures
void greetingScreen::drawTextures()
{
	DrawTexture(backgroundTexture, 578, 30, WHITE);
	DrawTexture(logoTexture, 1293, 745, WHITE);
	DrawTexture(greetingText, 108, 67, WHITE);
	DrawTexture(signInButton, signInButtonPos.x, signInButtonPos.y, WHITE);
	DrawTexture(registerButton, registerButtonPos.x, registerButtonPos.y, WHITE);

	DrawTexture(transitionTexture, 0, 0, transitionOpacity);
}

// Method for all button events
void greetingScreen::handleCollisions()
{
	// Handles the Sign in button
	if (CheckCollisionPointRec(mousePos, { signInButtonPos.x, signInButtonPos.y,
	static_cast<float>(signInButton.width), static_cast<float>(signInButton.height) })
		&& IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		std::cout << "button 1" << std::endl;
	}

	// Handles the Register button
	if (CheckCollisionPointRec(mousePos, { registerButtonPos.x, registerButtonPos.y,
	static_cast<float>(registerButton.width), static_cast<float>(registerButton.height) })
		&& IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		/*mySceneManager.setCurrentScene("MainMenu");*/
		std::cout << "button 2" << std::endl;
	}
}

// Method for fading out the texture
void greetingScreen::fadeAnimation()
{
	// Checks if to run the animation
	if (animationCounter >= 117)
		return;

	animationCounter++;

	if (animationCounter < 25)
		return;

	if (animationCounter < 60)
		transitionOpacity.a -= 2;
	else
		transitionOpacity.a -= 3;
}