#include "Actor\ActorFactory.h"

class Screen
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors;
	ActorFactory m_actorFactory;

public:
	Screen();
	virtual ActorMap CreateActorList() = 0;



};


