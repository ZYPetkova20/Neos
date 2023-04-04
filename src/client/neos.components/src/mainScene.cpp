#include "../include/mainScene.h"

mainScene::mainScene(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void mainScene::Start()
{
	setAtomsPos();
	setSectionsPos();
	setTabsPos();
	loadAssets();
	displayUserInfo();
}

// Method updating the scene every frame
void mainScene::Update()
{
	mousePos = GetMousePosition();
	BeginDrawing();

	ClearBackground(backgroundColor);
	drawTextures();
	handleCollision();

	EndDrawing();
}

// Method called when we exit the scene or the program
void mainScene::onExit()
{
	profilePic = "";
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
	DrawTextEx(font, userName.c_str(), {80.6f, 32.f}, 32.0f, 0.1f, WHITE);
	DrawTextEx(font, profilePic.c_str(), { 41, 42.5}, 32.0f, 0, BLACK);

}

// Method for handling collision events
void mainScene::handleCollision()
{
	for (int i = 0; i < 5; i++)
	{
		if (CheckCollisionPointRec(mousePos, tabsPos[i]))
		{
			if (selectedTabPos.y != tabsPos[i].y)
				selectedTabPos.y = tabsPos[i].y + (i * 1.4f);
			tabsAnimation = 0;

			if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
				return;

			switch (i)
			{
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
			case 3:
				ClearBackground(backgroundColor);
				EndDrawing();
				mySceneManager.setCurrentScene("ArchivePage", loggedUserId);
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

	for (int i = 0; i < 30; i++)
	{
		if (CheckCollisionPointRec(mousePos, elementsPos[i]))
		{
			if (i <= 8 && i >= 0)
				sIndex = 0;
			else if (i <= 11 && i > 8)
				sIndex = 1;
			else if (i <= 14 && i > 11)
				sIndex = 2;
			else if (i <= 20 && i > 14)
				sIndex = 3;
			else if (i <= 22 && i > 20)
				sIndex = 4;
			else if (i <= 24 && i > 22)
				sIndex = 5;
			else if (i <= 26 && i > 24)
				sIndex = 6;
			else if (i == 27)
				sIndex = 7;
			else if (i == 28)
				sIndex = 8;
			else if (i == 29)
				sIndex = 9;
			tableHoverPos.x = elementsPos[i].x + 2.7f;
			tableHoverPos.y = elementsPos[i].y - 2.7f;
			DrawTexture(sectionsTexture[sIndex], sectionPos[sIndex].x, sectionPos[sIndex].y, WHITE);
			DrawTexture(tableHover, tableHoverPos.x, tableHoverPos.y, WHITE);

			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
				atomsPreview.Start(i);
			
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

// Method for setting the atoms positions
void mainScene::setAtomsPos()
{
	elementsPos[0] = { 329,154,0,0 };   // H
	elementsPos[1] = { 1042,209,0,0 };  // C
	elementsPos[2] = { 1097,209,0,0 };  // N
	elementsPos[3] = { 1152,209,0,0 };  // O
	elementsPos[4] = { 1097,264,0,0 };  // P
	elementsPos[5] = { 1152,264,0,0 };  // S
	elementsPos[6] = { 1207,264,0,0 };  // Cl
	elementsPos[7] = { 1207,319,0,0 };  // Br
	elementsPos[8] = { 1207,374,0,0 };  // I
	elementsPos[9] = { 329,209,0,0 };   // Li
	elementsPos[10] = { 329,264,0,0 };  // Na
	elementsPos[11] = { 329,319,0,0 };  // K
	elementsPos[12] = { 384,264,0,0 };  // Mg
	elementsPos[13] = { 384,319,0,0 };  // Ca
	elementsPos[14] = { 384,429,0,0 };  // Ba
	elementsPos[15] = { 658,319,0,0 };  // Mn
	elementsPos[16] = { 713,319,0,0 };  // Fe
	elementsPos[17] = { 878,319,0,0 };  // Cu
	elementsPos[18] = { 932,319,0,0 };  // Zn
	elementsPos[19] = { 878,374,0,0 };  // Ag
	elementsPos[20] = { 878,429,0,0 };  // Au
	elementsPos[21] = { 987,264,0,0 };  // Al
	elementsPos[22] = { 1097,429,0,0 }; // Bi
	elementsPos[23] = { 987,209,0,0 };   // B
	elementsPos[24] = { 1042,264,0,0 };  // Si
	elementsPos[25] = { 1262,154,0,0 };  // He
	elementsPos[26] = { 1262,209,0,0 };  // Ne
	elementsPos[27] = { 987.3,484,0,0 }; // Nh
	elementsPos[28] = { 741,552,0,0 };   // Eu
	elementsPos[29] = { 576,607,0,0 };   // U

	for (int i = 0; i < 30; i++)
	{
		elementsPos[i].width = 54.0f;
		elementsPos[i].height = 54.0f;
	}
}

// Method for setting the sections positions
void mainScene::setSectionsPos()
{
	sectionPos[0] = {333.0, 152.0}; 
	sectionPos[1] = {333.8, 206.7}; 
	sectionPos[2] = {387.4, 207.0}; 
	sectionPos[3] = {443.0, 317.0}; 
	sectionPos[4] = {991.0, 262.0};
	sectionPos[5] = {991.0, 207.0};
	sectionPos[6] = {1266.0, 152.0};
	sectionPos[7] = {771.0, 481.0};
	sectionPos[8] = {442.5, 427.0};
	sectionPos[9] = {442.0, 481.0};
}

// Method for setting the tabs positions
void mainScene::setTabsPos()
{
	for (int i = 0; i < 5; i++)
	{
		tabsPos[i] = { 0.0f, 230.0f + (50.1f * i), 250, 52 };
	}
	tabsPos[1].y += 4.8f;
	tabsPos[2].y += 2.8f;
	selectedTabPos = tabsPos[0];
	logOutPos = {47 , 704, 92, 28};
}

// Method for setting the user info
void mainScene::displayUserInfo()
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
	std::cout << profilePic << std::endl;
}

// Method for loading the variables / assets
void mainScene::loadAssets()
{
	backgroundTexture = LoadTexture("../assets/mainScreen/backgroundTexture.png");
	headerText = LoadTexture("../assets/mainScreen/headerText.png");
	tableTexture = LoadTexture("../assets/mainScreen/periodicalTable.png");
	userInfo = LoadTexture("../assets/mainScreen/userTemplate.png");
	logOutButton = LoadTexture("../assets/mainScreen/logOut.png");
	selectedTab = LoadTexture("../assets/mainScreen/selectedTab.png");
	tableTab = LoadTexture("../assets/mainScreen/tableTab.png");
	calculatorTab = LoadTexture("../assets/mainScreen/calculatorTab.png");
	simulationTab = LoadTexture("../assets/mainScreen/simulationTab.png");
	archiveTab = LoadTexture("../assets/mainScreen/archiveTab.png");
	settingsTab = LoadTexture("../assets/mainScreen/settingsTab.png");
	tableHover = LoadTexture("../assets/mainScreen/elementHover.png");
	for (int i = 0; i < 10; i++)
	{
		std::string path = "../assets/mainScreen/tableSection" + std::to_string(i + 1) + ".png";
		sectionsTexture[i] = LoadTexture(path.c_str());
	}
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
	UnloadTexture(tableHover);
	for (int i = 0; i < 10; i++)
	{
		UnloadTexture(sectionsTexture[i]);
	}
}