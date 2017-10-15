#include "Screen.h"

class MainMenuScreen : public Screen
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors;

public:
	MainMenuScreen();
	ActorMap CreateActorList();



};


