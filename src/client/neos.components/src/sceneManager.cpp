#include "../include/sceneManager.h"

void sceneManager::setCurrentScene(std::string sceneName)
{
    if (currentScene != nullptr)
    {
        currentScene->onExit();
    }
    currentScene = getScene(sceneName);
    currentScene->Start();
}

void sceneManager::updateScene()
{
    currentScene->Update();
}

void sceneManager::addScene(scene* scene)
{
    allScenes.push_back(scene);
}

scene* sceneManager::getScene(std::string sceneName)
{
    return(*std::ranges::find_if(allScenes, [&sceneName](scene* scene) { return scene->mySceneName == sceneName; }));
}