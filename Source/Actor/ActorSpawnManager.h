#include "ActorFactory.h"
#include "Actor.h"

class ActorSpawnManager
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors; 
	ActorFactory m_actorFactory;
public:
	ActorSpawnManager(ActorMap actors); // keeps the list of actors in scene
	virtual bool Update(float deltaTime); // returns true if actor needs spawning
	virtual Actor SpawnActor(); // GameEngine calls this if Update returns true

private:
	
};


