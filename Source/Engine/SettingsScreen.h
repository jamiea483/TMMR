#include "Screen.h"
typedef std::map<ActorId, Actor*> ActorMap;

class SettingsScreen : public Screen
{
private:
	typedef std::map<ActorId, Actor*> ActorMap;
	ActorMap m_actors;
	
public:
	SettingsScreen();
	ActorMap* CreateActorList();


};


