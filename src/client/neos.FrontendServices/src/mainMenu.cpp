#include "../include/mainMenu.h"

mainMenu::mainMenu(std::string sceneName, sceneManager &sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void mainMenu::Start()
{

}

// Method updating the scene every frame
void mainMenu::Update()
{
	BeginDrawing();

	ClearBackground(RAYWHITE);

	EndDrawing();
}

// Method called when we exit the scene or the program
void mainMenu::onExit()
{

}

// Method for drawning the raylib textures
void mainMenu::drawTextures()
{

}

// Method for loading the variables / assets
void mainMenu::loadAssets()
{

}

// Method for unloading the variables / assets
void mainMenu::deleteAssets()
{

}