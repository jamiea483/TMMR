#include "ActorComponent.h"
#include <map>
#include "interfaces.h"


class ActorFactory
{
	typedef unsigned int ActorId;

	ActorId m_lastActorId;

protected:
	std::map<ActorComponent*, ComponentId> m_componentCreators;

public:
	ActorFactory();
	Actor* CreateActor(const char* actorResource);

protected:
	virtual ActorComponent* CreateComponent(char* pData);

private:
	ActorId GetNextActorId(void);

};


