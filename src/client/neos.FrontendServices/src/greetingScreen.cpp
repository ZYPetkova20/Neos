#include "../include/greetingScreen.h"

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
	transitionTexture = LoadTexture("../assets/loadingTransition.png");
}

// Method for unloading the variables / assets
void greetingScreen::deleteAssets()
{
	UnloadTexture(transitionTexture);
}

// Method for drawning the raylib textures
void greetingScreen::drawTextures()
{

	DrawTexture(transitionTexture, 0, 0, transitionOpacity);
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
		transitionOpacity.a -= 2.0f;
	else
		transitionOpacity.a -= 3.0f;
}