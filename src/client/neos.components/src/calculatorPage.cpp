#include "../include/calculatorPage.h"

calculatorPage::calculatorPage(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void calculatorPage::Start()
{
	setTabsPos();
	loadAssets();
}

// Method updating the scene every frame
void calculatorPage::Update()
{
	mousePos = GetMousePosition();

	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	handleCollision();

	EndDrawing();
}

// Method called when we exit the scene or the program
void calculatorPage::onExit()
{
	deleteAssets();
}

// Method for drawning the raylib textures
void calculatorPage::drawTextures()
{
	DrawTexture(backgroundTexture, 0, 0, WHITE);
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
void calculatorPage::handleCollision()
{
	for (int i = 0; i < 6; i++)
	{
		if (CheckCollisionPointRec(mousePos, tabsPos[i]))
		{
			if (selectedTabPos.y != tabsPos[i].y)
				selectedTabPos.y = tabsPos[i].y /*+ (i * 1.4f)*/;
			tabsAnimation = 0;

			if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
				return;

			switch (i)
			{
			case 0:
				mySceneManager.setCurrentScene("MainScene");
				break;
			/*case 2:
				mySceneManager.setCurrentScene("SignInForm");
				break;
			case 3:
				mySceneManager.setCurrentScene("SignInForm");
				break;
			case 4:
				mySceneManager.setCurrentScene("SignInForm");
				break;
			case 5:*/
			}
		}
		else if (tabsAnimation > 35)
		{

			if (selectedTabPos.y >= tabsPos[1].y)
				selectedTabPos.y -= 10.0f;
			if (selectedTabPos.y <= tabsPos[1].y)
				selectedTabPos.y = tabsPos[1].y;
		}
		else
		{
			tabsAnimation++;
		}
	}

}

// Method for setting the tabs positions
void calculatorPage::setTabsPos()
{
	for (int i = 0; i < 5; i++)
	{
		tabsPos[i] = { 0.0f, 230.0f + (50.1f * i), 250, 52 };
	}
	tabsPos[1].y += 4.8f;
	tabsPos[2].y += 2.8f;
	selectedTabPos = tabsPos[0];
}

// Method for loading the variables / assets
void calculatorPage::loadAssets()
{
	selectedTab = LoadTexture("../assets/mainScreen/selectedTab.png");
	tableTab = LoadTexture("../assets/mainScreen/tableTab.png");
	calculatorTab = LoadTexture("../assets/mainScreen/calculatorTab.png");
	simulationTab = LoadTexture("../assets/mainScreen/simulationTab.png");
	archiveTab = LoadTexture("../assets/mainScreen/archiveTab.png");
	settingsTab = LoadTexture("../assets/mainScreen/settingsTab.png");
	backgroundTexture = LoadTexture("../assets/mainScreen/backgroundTexture.png");
	userInfo = LoadTexture("../assets/mainScreen/userTemplate.png");
	logOutButton = LoadTexture("../assets/mainScreen/logOut.png");
}

// Method for unloading the variables / assets
void calculatorPage::deleteAssets()
{
	UnloadTexture(backgroundTexture);
	UnloadTexture(userInfo);
	UnloadTexture(logOutButton);
	UnloadTexture(selectedTab);
	UnloadTexture(tableTab);
	UnloadTexture(calculatorTab);
	UnloadTexture(simulationTab);
	UnloadTexture(archiveTab);
	UnloadTexture(settingsTab);
}