#include 

class Collider : public PhysicsComponentInterface
{
public:
	Collider();
	virtual bool VInit(TiXmlElement* pData); 
	
	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }

private:
	

}


