#include "AbilityComponentInterface.h"

class ElasticTongue : public AbilityComponentInterface
{
public:
	ElasticTongue();
	virtual bool VInit(char* pData) { return false; }
	virtual void ApplyEffect();

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	

};


