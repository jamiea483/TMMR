#pragma once
#include "interfaces.h"

class ActorComponent
{
	friend class ActorFactory;
protected:
	Actor* m_pOwner;
public:
	virtual ~ActorComponent(void) { }
	virtual bool VInit(char* pData) { return true; }
	virtual void VPostInit(void) { }
	virtual void VUpdate(int deltaTime) { }
	virtual ComponentId VGetId(void) const { return 0; }
	virtual const char *VGetName() const = 0;
	static ComponentId GetIdFromName(const char* componentStr) {}

private:
	void SetOwner(Actor* pOwner) { }
};