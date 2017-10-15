#include "ActorSpawnManager.h"
#include "Actor.h"

ActorSpawnManager::ActorSpawnManager() { }

ActorSpawnManager::ActorSpawnManager(ActorMap actors) {}

bool ActorSpawnManager::Update(float deltaTime) { return true; }

Actor* ActorSpawnManager::SpawnActor() { return nullptr; }


