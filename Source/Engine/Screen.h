#include "Actor\ActorFactory.h"

typedef std::map<ActorId, Actor*> ActorMap;

class Screen
{
private:

	ActorMap m_actors;
	ActorFactory m_actorFactory;

public:
	Screen();
	virtual ActorMap* CreateActorList();



};


