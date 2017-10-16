#include "Actor\ActorSpawnManager.h"
#include "Actor\Actor.h"

class GameplaySpawnManager : public ActorSpawnManager
{
public:
	GameplaySpawnManager(ActorMap actors); // keeps the list of actors in scene
	virtual bool Update(float deltaTime); // returns true if actor needs spawning
	virtual Actor* SpawnActor(); // GameEngine calls this if Update returns true

private:
	
};


