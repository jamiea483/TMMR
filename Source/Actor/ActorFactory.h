#include "ActorComponent.h"

class ActorFactory
{
	ActorId m_lastActorId;

protected:
	map<ActorComponent*, ComponentId> m_componentCreators;

public:
	ActorFactory(void);
	StrongActorPtr CreateActor(const char* actorResource);

protected:
	virtual StrongActorComponentPtr CreateComponent(TiXmlElement* pData); 

private:
	ActorId GetNextActorId(void);

};


