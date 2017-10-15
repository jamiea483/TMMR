#pragma once
#include "ActorComponent.h"
#include "interfaces.h"
#include <map>

class Actor
{
	friend class ActorFactory;
public:
	typedef std::map<ComponentId, ActorComponent*> ActorComponents;
private:
	ActorId m_id;
	ActorComponents m_components; 
public:
	Actor(ActorId id);
	~Actor(void);
	bool Init(char* pData);
	void PostInit(void);
	void Destroy(void);
	void Update(float deltaTime);
	ActorId GetId(void);
	void AddComponent(ActorComponent* pComponent);

};