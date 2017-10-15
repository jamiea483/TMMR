#include "Screen.h"

typedef std::map<ActorId, Actor*> ActorMap;

class PauseScreen : public Screen
{
private:
	typedef std::map<ActorId, Actor*> ActorMap;
	ActorMap m_actors;
	
public:
	PauseScreen();
	ActorMap* CreateActorList();


};


