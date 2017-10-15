class PauseScreen : public Screen
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors;
	
public:
	PauseScreen();
	ActorMap CreateActorList();


};


