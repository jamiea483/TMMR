#include "AbilityComponentInterface.h"

class FireBreath : public AbilityComponentInterface
{
public:
	FireBreath();
	virtual bool VInit(TiXmlElement* pData); 
	virtual void ApplyEffect();

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	

};


