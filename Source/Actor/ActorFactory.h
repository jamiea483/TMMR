
class ActorFactory
{
	ActorId m_lastActorId;

protected:
	std::map<ActorComponent*, ComponentId> m_componentCreators;

public:
	ActorFactory();
	StrongActorPtr CreateActor(const char* actorResource);

protected:
	virtual StrongActorComponentPtr CreateComponent(TiXmlElement* pData); 

private:
	ActorId GetNextActorId(void);

};


