#include "Screen.h"
typedef std::map<ActorId, Actor*> ActorMap;

class SettingsScreen : public Screen
{
private:

	ActorMap m_actors;
	
public:
	SettingsScreen();
	ActorMap* CreateActorList();


};


