class SettingsScreen : public Screen
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors;
	
public:
	SettingsScreen();
	ActorMap CreateActorList();


};


