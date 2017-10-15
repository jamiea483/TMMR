#include "Screen.h"
typedef std::map<ActorId, Actor*> ActorMap;

class MainMenuScreen : public Screen
{
private:
	typedef std::map<ActorId, Actor*> ActorMap;
	ActorMap m_actors;

public:
	MainMenuScreen();
	ActorMap* CreateActorList();



};


