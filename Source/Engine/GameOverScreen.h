#include <map>
#include "Screen.h"

typedef std::map<ActorId, Actor*> ActorMap;


class GameOverScreen : public Screen
{
private:
	typedef std::map<ActorId, Actor*> ActorMap;
	ActorMap m_actors;

public:
	

	GameOverScreen();
	ActorMap* CreateActorList();


};


