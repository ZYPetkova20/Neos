#include "../include/loadingScreen.h"
#include <iostream>

loadingScreen::loadingScreen(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void loadingScreen::Start()
{
	loadAssets();
}

// Method updating the scene every frame
void loadingScreen::Update()
{
	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	handleIntro();

	EndDrawing();
}

// Method called when we exit the scene or the program
void loadingScreen::onExit()
{
	deleteAssets();
}

// Method for loading the variables / assets
void loadingScreen::loadAssets()
{
	logoTexture = LoadTexture("../assets/mainLogo.png");
	transitionTexture = LoadTexture("../assets/loadingTransition.png");
}

// Method for unloading the variables / assets
void loadingScreen::deleteAssets()
{
	UnloadTexture(logoTexture);
	UnloadTexture(transitionTexture);
}

// Method for drawning the raylib textures
void loadingScreen::drawTextures()
{
	DrawTexture(logoTexture, 451, 315, {255,255,255, 255});
	DrawTexture(transitionTexture, 0, 0, loadingOpacity);
}

// Method for handling intro animation
void loadingScreen::handleIntro()
{
	if (animationIsOver)
	{
		EndDrawing();
		mySceneManager.setCurrentScene("GreetingScreen");
	}

	animationCounter++;
	decreaseOpacity();
	increaseOpacity();
}

// Method for fading in the texture
void loadingScreen::increaseOpacity()
{
	if (animationCounter <= 200)
		return;

	if (loadingOpacity.a >= 253)
	{
		animationIsOver = true;
		return;
	}

	if (animationCounter < 230)
		loadingOpacity.a += 3;
	else
		loadingOpacity.a += 4;
}

// Method for fading out the texture
void loadingScreen::decreaseOpacity()
{
	// Checks if to run the animation
	if (animationCounter >= 157)
		return;

	if (animationCounter < 65)
		return;

	if (animationCounter < 90)
		loadingOpacity.a -= 2;
	else
		loadingOpacity.a -= 3;
}