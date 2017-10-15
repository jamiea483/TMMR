#pragma once

#include "Actor\ActorComponent.h"

class PhysicsComponentInterface : public ActorComponent
{
public:
	const static ComponentId g_COMPONENT_ID;
	
	PhysicsComponentInterface() {}
	virtual ComponentId VGetComponentId(void) const { return 0; }

private:
	

};


