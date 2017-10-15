#include "Screen.h"

class GameplayScreen : private Screen
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors;

public:
	GameplayScreen();
	ActorMap CreateActorList();
	void InitActorsWithPhysicsList();

};


