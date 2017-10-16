#include "Actor\Physic\PhysicsComponentInterface.h"

class Collider : public PhysicsComponentInterface
{
public:
	Collider();
	virtual bool VInit(char* pData) {return false;}
	
	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }

private:
	

};


