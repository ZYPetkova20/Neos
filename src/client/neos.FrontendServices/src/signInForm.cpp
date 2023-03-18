#include "../include/signInForm.h"

signInForm::signInForm(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void signInForm::Start()
{

}

// Method updating the scene every frame
void signInForm::Update()
{
	BeginDrawing();

	ClearBackground(backgroundColor);

	EndDrawing();
}

// Method called when we exit the scene or the program
void signInForm::onExit()
{

}

// Method for drawning the raylib textures
void signInForm::drawTextures()
{

}

// Method for loading the variables / assets
void signInForm::loadAssets()
{

}

// Method for unloading the variables / assets
void signInForm::deleteAssets()
{

}