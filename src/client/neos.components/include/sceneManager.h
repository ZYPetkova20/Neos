#pragma once
#include "scene.h"
#include <vector>

class sceneManager
{
public:
    void setCurrentScene(std::string sceneName, int userId = -1);
    void updateScene();
    void addScene(scene* scene);

private:
    scene* getScene(std::string sceneName);
    scene* currentScene = nullptr;

    std::vector<scene*> allScenes;
};