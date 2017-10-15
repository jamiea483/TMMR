#include "Screen.h"

class GameOverScreen : public Screen
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors;

public:
	GameOverScreen();
	ActorMap CreateActorList();


};


