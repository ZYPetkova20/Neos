#include "../include/simulatorPage.h"

simulatorPage::simulatorPage(std::string sceneName, sceneManager& sceneManager) : scene(sceneName), mySceneManager(sceneManager)
{
}

// Method called once at the start of the scene
void simulatorPage::Start()
{
	// Set camera
	camera.position = { 0.0f, 0.0f, 3.0f };
	camera.target = { 0.0f, 0.0f, 0.0f };
	camera.up = { 0.0f, 1.0f, 0.0f };
	camera.fovy = 45.0f;
	camera.projection = CAMERA_PERSPECTIVE;
	SetCameraMode(camera, CAMERA_FREE);

	loadAssets();
	for (int i = 0; i < 6; i++)
	{
		elementsPos[i] = { 67.4f, 67.4f, 31.f + (i * 26), 23};
		moleculesPos[i] = { 0,0,0,0 };
	}
}

// Method updating the scene every frame
void simulatorPage::Update()
{
	mousePos = GetMousePosition();
	handleCollision();
	if (dragging != -1)
		handleDragDrop();

	UpdateCamera(&camera);
	BeginDrawing();
	//BeginMode3D(camera);
	ClearBackground(backgroundColor);
	//DrawModel(moleculesModel[0], { moleculesPos[0].x , moleculesPos[0].y, 0.0f}, 10.0f, WHITE);
	//EndMode3D();
	drawTextures();
	EndDrawing();
}

// Method called when we exit the scene or the program
void simulatorPage::onExit()
{
	deleteAssets();
}

// Method for drawning the raylib textures
void simulatorPage::drawTextures()
{
	DrawTexture(backgroundTexture, 0, 0, WHITE);
	DrawTexture(h1, 260, 28, WHITE);
}

// Method for handling collision events
void simulatorPage::handleCollision()
{
	for (int i = 0; i < 6; i++)
	{
		if (!CheckCollisionPointRec(mousePos, elementsPos[i]))
			continue;
		if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			continue;
		dragging = i;
	}
	
	if (!CheckCollisionPointRec(mousePos, backButton))
		return;
	if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		return;
	//EndMode3D();
	EndDrawing();
	mySceneManager.setCurrentScene("MainScene", loggedUserId);
}

// Method for handling drag and drop
void simulatorPage::handleDragDrop()
{
	if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		dragging = -1;
		return;
	}
	moleculesPos[dragging].x = mousePos.x;
	moleculesPos[dragging].y = mousePos.y;
}

// Method for loading the variables / assets
void simulatorPage::loadAssets()
{
	backgroundTexture = LoadTexture("../assets/simulatorPage/backgroundTexture.png");
	h1 = LoadTexture("../assets/simulatorPage/h1.png");
	//for (int i = 0; i < 6; i++)
	//{
	//	std::string path = "../assets/3dModels/compounds/compoundModel" + std::to_string(i) + ".glb";
	//	moleculesModel[i] = LoadModel(path.c_str());
	//}
}

// Method for unloading the variables / assets
void simulatorPage::deleteAssets()
{
	UnloadTexture(backgroundTexture);
	UnloadTexture(h1);
	//for (int i = 0; i < 6; i++)
	//	UnloadModel(moleculesModel[i]);
}