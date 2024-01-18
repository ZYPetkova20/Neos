#include "../include/atomsScene.h"

atomsScene::atomsScene()
{
}

// Method called once at the start of the scene
void atomsScene::Start(int atomId)
{
	currentAtom = atomId;

	// Set camera
	camera.position = { 0.0f, 8.0f, 10.0f };
	camera.target = { 0.0f, 0.0f, 0.0f };
	camera.up = { 0.0f, 1.0f, 0.0f };
	camera.fovy = 45.0f;
	camera.projection = CAMERA_PERSPECTIVE;
	SetCameraMode(camera, CAMERA_ORBITAL);

	loadAssets();
	Update();
}

// Method updating the scene every frame
void atomsScene::Update()
{
	while (!WindowShouldClose())
	{
		mousePos = GetMousePosition();

		if (CheckCollisionPointRec(mousePos, backButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			break;

		displayAtom(camera, cameraFlag);
		UpdateCamera(&camera);

		BeginDrawing();

		ClearBackground(RAYWHITE);

		BeginTextureMode(atomField);
		BeginMode3D(camera);
		ClearBackground(WHITE);

		DrawModel(atomModel, { 0.0f , 0.0f, 0.0f }, 10.0f, LIGHTGRAY);

		EndMode3D();
		EndTextureMode();

		DrawTextureRec(atomField.texture, { 0, 0, screenWidth, -screenHeight }, { 440, 0 }, RAYWHITE);
		DrawTexture(atomInfo, 0, 0, WHITE);

		EndDrawing();
	}

	onExit();
}

// Method called when we exit the scene or the program
void atomsScene::onExit()
{
	deleteAssets();
}

// Method for loading the variables / assets
void atomsScene::loadAssets()
{
	// Loads the model of the current element
	std::string path = "../assets/3dModels/atomModel" + std::to_string(currentAtom) + ".glb";
	atomModel = LoadModel(path.c_str());

	// Loads the info of the current element
	std::string path2 = "../assets/elementInfo/atomInfo" + std::to_string(currentAtom) + ".png";
	atomInfo = LoadTexture(path2.c_str());

	atomField = LoadRenderTexture(966, 790);
}

// Method for unloading the variables / assets
void atomsScene::deleteAssets()
{
	UnloadModel(atomModel);
	UnloadTexture(atomInfo);
	UnloadRenderTexture(atomField);
}

void atomsScene::CameraYaw1(Camera* camera, float angle, bool rotateAroundTarget)
{
	// Rotation axis
	Vector3 up = GetCameraUp(camera);

	// View vector
	Vector3 target_position = Vector3Subtract(camera->target, camera->position);

	// Rotate view vector around up axis
	target_position = Vector3RotateByAxisAngle(target_position, up, angle);

	if (rotateAroundTarget)
	{
		// Move position relative to target
		camera->position = Vector3Subtract(camera->target, target_position);
	}
	else // rotate around camera.position
	{
		// Move target relative to position
		camera->target = Vector3Add(camera->position, target_position);
	}
}

void atomsScene::displayAtom(Camera& camera, bool& cameraFlag)
{
	if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
	{
		if (cameraFlag)
		{
			SetCameraMode(camera, CAMERA_FREE);
			cameraFlag = false;
		}
	}
	else if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
	{
		SetCameraMode(camera, CAMERA_CUSTOM);
	}
	else
	{
		cameraFlag = true;
		CameraYaw1(&camera, 0.01f, true);
	}
}

Vector3 atomsScene::GetCameraUp(Camera* camera)
{
	return Vector3Normalize(camera->up);
}