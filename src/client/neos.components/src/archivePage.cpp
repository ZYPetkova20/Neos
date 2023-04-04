#include "../include/archivePage.h"

archivePage::archivePage(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void archivePage::Start()
{
	setTabsPos();
	loadAssets();
	displayUserInfo();
}

// Method updating the scene every frame
void archivePage::Update()
{
	mousePos = GetMousePosition();

	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	handleCollision();

	EndDrawing();
}

// Method called when we exit the scene or the program
void archivePage::onExit()
{
	profilePic = "";
	deleteAssets();
}

// Method for drawning the raylib textures
void archivePage::drawTextures()
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
	DrawTextEx(font, userName.c_str(), { 80.6f, 32.f }, 32.0f, 0.1f, WHITE);
	DrawTextEx(font, profilePic.c_str(), { 41, 42.5 }, 32.0f, 0, BLACK);
}

// Method for handling collision events
void archivePage::handleCollision()
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
				ClearBackground(backgroundColor);
				EndDrawing();
				mySceneManager.setCurrentScene("MainScene", loggedUserId);
				break;
			case 1:
				ClearBackground(backgroundColor);
				EndDrawing();
				mySceneManager.setCurrentScene("CalculatorPage", loggedUserId);
				break;
			case 2:
				ClearBackground(backgroundColor);
				EndDrawing();
				mySceneManager.setCurrentScene("SimulatorPage", loggedUserId);
				break;
			case 4:
				ClearBackground(backgroundColor);
				EndDrawing();
				mySceneManager.setCurrentScene("AboutPage", loggedUserId);
				break;
			}
		}
		else if (tabsAnimation > 35)
		{

			if (selectedTabPos.y >= tabsPos[3].y)
				selectedTabPos.y -= 10.0f;
			if (selectedTabPos.y <= tabsPos[3].y)
				selectedTabPos.y = tabsPos[3].y;
		}
		else
		{
			tabsAnimation++;
		}
	}

	if (!CheckCollisionPointRec(mousePos, logOutPos))
		return;
	if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		return;
	// If logout button pressed
	//logReg.logout();
	EndDrawing();
	mySceneManager.setCurrentScene("GreetingScreen");
}

// Method for setting the tabs positions
void archivePage::setTabsPos()
{
	for (int i = 0; i < 5; i++)
	{
		tabsPos[i] = { 0.0f, 230.0f + (50.1f * i), 250, 52 };
	}
	tabsPos[1].y += 4.8f;
	tabsPos[2].y += 4.8f;
	tabsPos[3].y += 4.8f;
	tabsPos[4].y += 4.8f;
	selectedTabPos = tabsPos[3];
	logOutPos = { 47 , 704, 92, 28 };
}

// Method for setting the user info
void archivePage::displayUserInfo()
{
	ReqHandler logReg;
	fName = logReg.getFirstName(loggedUserId);
	lName = logReg.getLastName(loggedUserId);
	font = LoadFontEx("../assets/fonts/texgyreadventor-bold.otf", 32.0f, 0, 0);
	userName = fName + "" + lName;
	char ch = fName[0];
	char ch2 = lName[0];
	profilePic += fName[0];
	profilePic += lName[0];
}

// Method for loading the variables / assets
void archivePage::loadAssets()
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
void archivePage::deleteAssets()
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