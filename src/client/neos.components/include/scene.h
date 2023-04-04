#pragma once
#include "../include/reqHandler.h"
#include <raylib.h>
#include <string>
#include <ranges>

class scene 
{
public:
	scene(std::string sceneName) : mySceneName(sceneName)
	{
	}
	std::string mySceneName;

	// Basic variables for all scenes
	Color backgroundColor = { 248, 248, 248, 255 };
	int loggedUserId = -1; // logIn and register in the scenes

	// Basic methods for all scenes
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void onExit() = 0;
	virtual void loadAssets() = 0;
	virtual void deleteAssets() = 0;
};