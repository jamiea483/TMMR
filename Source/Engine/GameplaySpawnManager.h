#include "Actor\ActorSpawnManager.h"
#include "Actor\Actor.h"
typedef std::map<ActorId, Actor*> ActorMap;

class GameplaySpawnManager : public ActorSpawnManager
{
public:
	typedef std::map<ActorId, Actor*> ActorMap;

	GameplaySpawnManager(ActorMap actors); // keeps the list of actors in scene
	virtual bool Update(float deltaTime); // returns true if actor needs spawning
	virtual Actor* SpawnActor(); // GameEngine calls this if Update returns true

private:
	
};


