#include "Screen.h"


typedef std::map<ActorId, Actor*> ActorMap;

class GameplayScreen : private Screen
{
private:
	typedef std::map<ActorId, Actor*> ActorMap;
	ActorMap m_actors;

public:
	GameplayScreen();
	ActorMap* CreateActorList();
	void InitActorsWithPhysicsList();

};


