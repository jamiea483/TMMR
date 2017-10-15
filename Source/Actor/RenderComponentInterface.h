#include "ActorComponent.h"

class RenderComponentInterface : public ActorComponent
{
public:
	const static ComponentId g_COMPONENT_ID;
	
	RenderComponentInterface();
	virtual ComponentId VGetComponentId(void) const { }

private:
	

};


