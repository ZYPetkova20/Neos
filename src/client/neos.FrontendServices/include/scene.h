#pragma once
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

	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void onExit() = 0;
	virtual void loadAssets() = 0;
	virtual void deleteAssets() = 0;
};