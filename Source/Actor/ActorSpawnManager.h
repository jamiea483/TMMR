#include "Actor/ActorFactory.h"
#include "Actor/Actor.h"


typedef std::map<ActorId, Actor*> ActorMap;
class ActorSpawnManager
{

private:
	
	ActorMap m_actors; 
	ActorFactory m_actorFactory;
public:
	ActorSpawnManager();
	ActorSpawnManager(ActorMap actors); // keeps the list of actors in scene
	virtual bool Update(float deltaTime); // returns true if actor needs spawning
	virtual Actor* SpawnActor(); // GameEngine calls this if Update returns true

private:
	
};


