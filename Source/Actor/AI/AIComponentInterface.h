#include "Actor\ActorComponent.h"
#include "Actor\interfaces.h"

class AIComponentInterface : public ActorComponent
{
public:
	const static ComponentId g_COMPONENT_ID;
	
	AIComponentInterface() {}
	virtual ComponentId VGetComponentId(void) const { return 1; }

private:
	

};


