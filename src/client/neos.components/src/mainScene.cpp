#include "../include/mainScene.h"

mainScene::mainScene(std::string sceneName, sceneManager &sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void mainScene::Start()
{
	for (int i = 0; i < 5; i++)
	{
		tabsPos[i] = { 0.0f, 230.0f + (50.1f * i), 250, 52};
	}
	tabsPos[1].y += 4.8f;
	tabsPos[2].y += 2.8f;
	selectedTabPos = tabsPos[0];
	loadAssets();
}

// Method updating the scene every frame
void mainScene::Update()
{
	mousePos = GetMousePosition();
	handleCollision();
	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();

	EndDrawing();
}

// Method called when we exit the scene or the program
void mainScene::onExit()
{
	deleteAssets();
}

// Method for drawning the raylib textures
void mainScene::drawTextures()
{
	DrawTexture(backgroundTexture, 0, 0, WHITE);
	DrawTexture(headerText, 332, 28, WHITE);
	DrawTexture(tableTexture, 332, 152, WHITE);
	DrawTexture(userInfo, 30, 37, WHITE);
	DrawTexture(logOutButton, 40, 700, WHITE);
	DrawTexture(selectedTab, selectedTabPos.x, selectedTabPos.y, WHITE);
	DrawTexture(tableTab, 42, 242, WHITE);
	DrawTexture(calculatorTab, 42, 295, WHITE);
	DrawTexture(simulationTab, 42, 345, WHITE);
	DrawTexture(archiveTab, 43, 395, WHITE);
	DrawTexture(settingsTab, 41, 445, WHITE);
}

// Method for handling collision events
void mainScene::handleCollision()
{
	for (int i = 0; i < 6; i++)
	{
		if (CheckCollisionPointRec(mousePos, tabsPos[i]))
		{
			if (selectedTabPos.y != tabsPos[i].y)
				selectedTabPos.y = tabsPos[i].y + (i * 1.4f);
			tabsAnimation = 0;
		}
		else if(tabsAnimation > 35)
		{

			if (selectedTabPos.y >= tabsPos[0].y)
				selectedTabPos.y -= 10.0f;
			if (selectedTabPos.y <= tabsPos[0].y)
				selectedTabPos.y = tabsPos[0].y;
		}
		else
		{
			tabsAnimation++;
		}
	}
}

// Method for loading the variables / assets
void mainScene::loadAssets()
{
	backgroundTexture = LoadTexture("../assets/mainScreen/backgroundTexture.png");
	headerText = LoadTexture("../assets/mainScreen/headerText.png");;
	tableTexture = LoadTexture("../assets/mainScreen/periodicalTable.png");;
	userInfo = LoadTexture("../assets/mainScreen/userTemplate.png");;
	logOutButton = LoadTexture("../assets/mainScreen/logOut.png");;
	selectedTab = LoadTexture("../assets/mainScreen/selectedTab.png");;
	tableTab = LoadTexture("../assets/mainScreen/tableTab.png");;
	calculatorTab = LoadTexture("../assets/mainScreen/calculatorTab.png");;
	simulationTab = LoadTexture("../assets/mainScreen/simulationTab.png");;
	archiveTab = LoadTexture("../assets/mainScreen/archiveTab.png");;
	settingsTab = LoadTexture("../assets/mainScreen/settingsTab.png");;
}

// Method for unloading the variables / assets
void mainScene::deleteAssets()
{
	UnloadTexture(backgroundTexture);
	UnloadTexture(headerText);
	UnloadTexture(tableTexture);
	UnloadTexture(userInfo);
	UnloadTexture(logOutButton);
	UnloadTexture(selectedTab);
	UnloadTexture(tableTab);
	UnloadTexture(calculatorTab);
	UnloadTexture(simulationTab);
	UnloadTexture(archiveTab);
	UnloadTexture(settingsTab);

}