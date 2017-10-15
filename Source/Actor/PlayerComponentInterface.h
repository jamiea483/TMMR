#include "ActorComponent.h"
#include "interfaces.h"

class PlayerComponentInterface : public ActorComponent
{
public:
	const static ComponentId g_COMPONENT_ID;
	
	PlayerComponentInterface() {}
	virtual ComponentId VGetComponentId(void) const { return 0; }

private:
	

};


