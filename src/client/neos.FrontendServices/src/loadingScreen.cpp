#include "../include/loadingScreen.h"

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
}

// Method for unloading the variables / assets
void loadingScreen::deleteAssets()
{
	UnloadTexture(logoTexture);
}

// Method for drawning the raylib textures
void loadingScreen::drawTextures()
{
	DrawTexture(logoTexture, 451, 315, WHITE);
}